#include "barcodeLib.h"
#include "tryFunc.h"
#include "barcodeFunc.h"

static unsigned char compareArr[] = {1,17,9,25,5,20,12,3,18,16,4};

int scanSequence(t_barcode *barcode){
    scanf("%d",&barcode->size);
    float inputFloat=0;
    float compareFloat = 0.5;

    barcode->barcode = malloc(sizeof(char)*barcode->size);
    if(!barcode->barcode){
        printf("\nSomething went wrong, check log file.\n");
        return Memory_allocation_error;
    }
    int i=0;
    for(i=0;i<barcode->size;i++){
        scanf("%f",&inputFloat);
        barcode->barcode[i]=inputFloat<compareFloat;
    }
    return Success;
}

int readSequence(t_barcode *barcode){
    int codeSize=10;
    int codePos=0;
    char *code = malloc(codeSize);
    if(!code){
        printf("\nSomething went wrong, check log file.\n");
        return Memory_allocation_error;
    }
    int i=0;
    char blackFlag=0;
    for(i = 0;i<barcode->size;i++){
        if(codePos==codeSize-1){
            codeSize+=5;
            code = realloc(code,codeSize);
            if(!code){
                printf("\nSomething went wrong, check log file.\n");
                return Memory_allocation_error;
            }
        }
        char tempFlag=0;
        if(barcode->barcode[i]){
            tempFlag=1;
        }
        if(blackFlag && tempFlag){
            code[codePos]=1;
            codePos+=1;
            blackFlag=0;
        }else if(blackFlag){
            code[codePos]=0;
            codePos+=1;
            blackFlag=0;
        }else if(tempFlag){
            blackFlag=1;
        }
    }
    barcode->size=codePos+1;
    code = realloc(code,barcode->size);
    if(!code){
        printf("\nSomething went wrong, check log file.\n");
        return Memory_allocation_error;
    }
    free(barcode->barcode);

    barcode->barcode=code;

    tryFunc(&reverseCheck,barcode,"reverseCheck");

    tryFunc(&cutEdges,barcode,"cutEdges");

    return Success;
}

int validateCode(t_barcode *barcode){
    if(barcode->size<5){
        printf("\nSomething went wrong, check log file.\n");
        return Barcode_too_short;
    }
    int i=0;
    char *code = malloc(barcode->size/5);
    if(!code){
        printf("\nSomething went wrong, check log file.\n");
        return Memory_allocation_error;
    }
    int codePos=0;
    for(;i<barcode->size;i+=5){
        int j=i;
        char num=0;
        while(i<barcode->size && j<i+5){
            num=num<<1;
            num=num|barcode->barcode[j];
            j++;
        }
        
        code[codePos]=num;
        codePos++;
    }
    barcode->size/=5;
    free(barcode->barcode);
    barcode->barcode=code;
    return Success;
}

int checkCode(t_barcode *barcode){
    if(barcode->size<3){
        printf("\nSomething went wrong, check log file.\n");
        return Barcode_too_short;
    }
    int i=0;
    char *code = malloc(barcode->size);
    if(!code){
        printf("\nSomething went wrong, check log file.\n");
        return Memory_allocation_error;
    }
    for(i=0;i<barcode->size;i++){
        int j=0;
        int temp=0;
        char breakFlag=1;
        for(j=0;j<11;j++){
            if(barcode->barcode[i]==compareArr[j]){
                temp=j;
                breakFlag=0;
                break;
            }
        }
        if(breakFlag){
            printf("\nUnknown symbol in barcode\n.");
            return Unknown_symbol;
        }
        code[i]=temp;
    }
    free(barcode->barcode);
    barcode->barcode=code;
    if(!checkC(barcode)){
        printf("\nSomething went wrong, check log file.\n");
        return Wrong_C;
    }
    if(!checkK(barcode)){
        printf("\nSomething went wrong, check log file.\n");
        return Wrong_K;
    }
    
    for(i=0;i<barcode->size-2;i++){
        if(barcode->barcode[i]<10){
            printf("%d",barcode->barcode[i]);
        }else{
            printf("-");
        }
        
    }
    printf("\nCorrect barcode\n");
    return Success;
}
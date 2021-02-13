#include <stdio.h>
#include <stdlib.h>

/*Задача 11.
Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.*/

void game();

int main(void){

    game();

    return 0;
}

void game(){
        int *num=NULL;
    char** fName=NULL;
    char** lName=NULL;
    int *age=NULL;
    int size;
    int numV;
    char c;
    int j, stSize;
    printf("Enter number of participants: ");
    fflush(stdin);
    scanf("%d",&size);

    num=(int *)malloc(size*sizeof(int));
    age=(int *)malloc(size*sizeof(int));
    fName=(char *)malloc(size*sizeof(char));
    lName=(char *)malloc(size*sizeof(char));

    for (int i = 0; i < size; i++) {
        printf("Enter participant number: ");
        fflush(stdin);
        scanf("%d",&numV);
        num[i]=numV;
        printf("Enter participant first name: ");
        j=0;
        stSize=2;
        fflush(stdin);
        fName[i] = malloc(stSize * sizeof(fName[0]));
        while((c=getchar())!='\n'){
            if(j==stSize-1){
                stSize+=2;
                fName = realloc(fName,stSize*sizeof(char));
            }
            fName[i][j]=c;
            j++;
        }
        fName[i][j]='\0';
        j=0;
        stSize=2;
        fflush(stdin);
        printf("Enter participant last name: ");
        lName[i] = malloc(stSize * sizeof(lName[0]));
        while((c=getchar())!='\n'){
            if(j==stSize-1){
                stSize+=2;
                lName = realloc(lName,stSize*sizeof(char));
            }
            lName[i][j]=c;
            j++;
        }
        lName[i][j]='\0';
        printf("Enter participant age: ");
        fflush(stdin);
        scanf("%d",&numV);
        age[i]=numV;
    }

    for(int i=0;i<size;i++){
        printf("Pnumber= %d  ",num[i]);
        printf("First name= %s  ",fName[i]);
        printf("Last name= %s  ",lName[i]);
        printf("age = %d  ",age[i]);
        printf("\n");
    }
}
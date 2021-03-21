#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

void menu(){

    FILE *pfile = NULL;
    init();

    printf("For scenario 1 press 1\nFor scenario 2 press 2\nFor scenario 3 press 3\n");
    int input = 0;
    fflush(stdin);
    scanf("%d",&input);
    char *filename;
    switch(input){
        case 1:
            filename = "s1.txt";
            break;
        case 2:
            filename = "s2.txt";
            break;
        case 3:
            filename = "s3.txt";
            break;
        default:
            printf("Something went wrong");
            break;
    }
    printf("\n");
    pfile = fopen(filename, "rt");
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    
    bagPack(pfile);
    printf("Items used:\n");
    printList();
    fclose(pfile);
}

void bagPack(FILE *pfile){
    int M, N;
    fscanf(pfile,"%d", &M);
    fscanf(pfile,"%d", &N);
    int *mi = (int *)malloc(N * sizeof(int));
    int *ci = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        int a;
        fscanf(pfile,"%d", &a);
        mi[i] = a;
        fflush(stdin);
        fscanf(pfile,"%d", &a);
        ci[i] = a;
        
    }

    printf("\nBest Value: %d\n",getResult(M, mi, ci, N));
    free(mi);
    free(ci);
}

int getResult(int M, int mi[], int ci[], int N)
{
    int **Matrix = (int **)malloc((N + 1) * sizeof(int));
    int i,j;
    for(i=0;i<=N;i++){
        Matrix[i]=(int*)malloc((M+1)*sizeof(int));
    }
    for(i=0;i<N;i++){
        Matrix[i][j]=0;
    }
    for(i=1;i<=N;i++){
        int m=mi[i-1];
        int c=ci[i-1];
        for(j=0;j<=M;j++){
            
            Matrix[i][j]=Matrix[i-1][j];
            if(j>=m && Matrix[i-1][j-m]+c>Matrix[i][j]){
                Matrix[i][j]=Matrix[i-1][j-m]+c;
            }
        }
    }

    int sz=M;

    for (int i = N; i > 0; i--) {
      if (Matrix[i][sz] != Matrix[i - 1][sz]) {
        int itemIndex = i - 1;
        add(itemIndex,mi[itemIndex],ci[itemIndex]);
        sz -= mi[itemIndex];
      }
    }

    int rez=Matrix[N][M];
    free(Matrix);
    return rez;
}

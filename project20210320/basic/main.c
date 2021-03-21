#include <stdio.h>
#include <stdlib.h>

/*ласическа задача за раницата:

    Дадена е раница с вместимост M килограма и N предмета, всеки от които се характеризира с две числа - тегло mi и стойност ci. Да се избере такова множество от предмети, чиято сумарна стойност е максимална, а сумата от теглата не надвишава M.

    Дефинираме рекурентна целева функция:

F(0) = 0;  F(i) = max { cj + F(i-mj),  j = 1, 2, ..., N,  mj <= i }, i > 0

    Методът на динамичното оптимиране изисква последователно пресмятане на стойностите на F(i), като за това пресмятане се използват вече пресметнатите стойности за по-малки i.*/

int getResult(int M, int mi[], int ci[], int N);

int main(void)
{

    int M, N;
    printf("Enter bag capacity: ");
    fflush(stdin);
    scanf("%d", &M);
    printf("How many items: ");
    fflush(stdin);
    scanf("%d", &N);

    int *mi = (int *)malloc(N * sizeof(int));
    int *ci = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        int a;
        printf("Enter item %d weight: ", i + 1);
        fflush(stdin);
        scanf("%d", &a);
        mi[i] = a;
        printf("Enter item %d value: ", i + 1);
        fflush(stdin);
        scanf("%d", &a);
        ci[i] = a;
    }
    printf("\nMax Value: %d\n",getResult(M, mi, ci, N));
    free(mi);
    free(ci);
    return 0;
}

int getResult(int M, int mi[], int ci[], int N)
{

    int **Matrix = (int **)malloc((N + 1) * sizeof(int));
    int i,j;
    printf("%d %d\n",M,N);
    for(i=0;i<N;i++){
        printf("%d %d\n",mi[i],ci[i]);
    }
    for(i=0;i<=N;i++){
        Matrix[i]=(int*)malloc((M+1)*sizeof(int));
    }
    for(i=0;i<M;i++){
        Matrix[0][i]=0;
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

    int rez=Matrix[N][M];
    free(Matrix);
    return rez;
}
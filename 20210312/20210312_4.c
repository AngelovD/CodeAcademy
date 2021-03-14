/*#include <stdio.h>
#define N 6
#define INF 9999
int main()
{
int i,j,k;
int A[N][N] = {
{0, 7, 9, INF, INF,14},
{7, 0, 10, 15,INF,INF},
{9, 10, 0,11,INF, 2},
{INF,15,11,0,6,INF},
{INF,INF,INF,6,0,9},
{14,INF,2,INF,9,0}
};
for (k = 0; k < N; k++)
for (i = 0; i < N; i++)
for (j = 0; j < N; j++)
if (A[i][k] + A[k][j] < A[i][j]){
A[i][j] = A[i][k] + A[k][j];
printf("A[%d][%d] = A[%d][%d] + A[%d][%d] = %d\n", i, j, i, k, k, j, A[i][j]);
}
for(i=0;i< N;i++){
for(j=0;j< N;j++){
printf("%d ",A[i][j]);
}
printf("\n");
}
return 0;
}*/

#include <stdio.h>
#define N 6
#define INF 9999
int main()
{
    int i, j, k;
    int A[N][N] = {
        {0, 7, 9, INF, INF, 14},
        {7, 0, 10, 15, INF, INF},
        {9, 10, 0, 11, INF, 2},
        {INF, 15, 11, 0, 6, INF},
        {INF, INF, INF, 6, 0, 9},
        {14, INF, 2, INF, 9, 0}};
    for (k = 0; k < N; k++)
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                if (A[i][k] + A[k][j] < A[i][j])
                {
                    A[i][j] = A[i][k] + A[k][j];
                    printf("A[%d][%d] = A[%d][%d] + A[%d][%d] = %d\n", i, j, i, k, k, j, A[i][j]);
                }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
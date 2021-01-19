#include <stdio.h>

int main(){
    int nA, nB,nX,nY;

    printf("A=");
    scanf("%d", &nA);
    printf("B=");
    scanf("%d", &nB);
    printf("X=");
    scanf("%d",&nX);
    printf("Y=");
    scanf("%d",&nY);

    printf("%d  %d\n",nX,nY);

    printf("%d  %d\n", nA, nB);

    if (nA > nB && nA != 0)
    {
        printf("&& Operator : Both conditions are true\n");
    }

    if (nX > nY || nY != 20)
    {
        printf("|| Operator : Only one or both conditions are true\n");
    }

    if (!(nA > nB && nB != 0))
    {
        printf("! Operator : One or both conditions is false\n");
    }
    else
    {
        printf("Both conditions are true.\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int nX, nY;

    printf("X=");
    scanf("%d",&nX);
    printf("Y=");
    scanf("%d",&nY);

    printf("%d  %d\n",nX,nY);


    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    else if(nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    }else if (nX < nY)
    {
        printf("%d is smaller than %d\n", nX, nY);
    }

    return 0;
}
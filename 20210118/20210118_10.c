#include <stdio.h>
int main()
{
    int nResult = 47; 
    int nX = 10;

    printf("Result = %d\n", nResult);

    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    
    nResult = 1;
    printf("Result = %d\n", nResult);
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);

    nResult = 444444;
    printf("Result = %d\n", nResult);
    nResult >>= nX;
    printf("Result >>= %d -> %d\n", nX, nResult);

    return 0;
}
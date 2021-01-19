#include <stdio.h>
int main()
{
    int iCounter = 0;
    while (++iCounter < 3)
    {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++iCounter);
        printf("-- Counter: %d\n", --iCounter);
        printf("Counter ++: %d\n", iCounter++);
        printf("Counter --: %d\n", iCounter--);
    }
    //Ако се препълни брояча се завършва скоупа и се излиза от цикъла
    
    return 0;
}
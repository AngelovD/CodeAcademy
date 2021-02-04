#include <stdio.h>

/*Задача 5. Дефиниране и използване на указател*/

int main(void){

    int nValue = 13;
    int *pnValue = NULL;
    /* address of nValue is assigned to pnValue */
    pnValue = &nValue;
    /* display value using ptr variable */
    printf("Value = %d, *pnValue = %d, pnValue (hex) = %0x\n",nValue, *pnValue, pnValue);
    return 0;
}

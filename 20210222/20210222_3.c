#include <stdio.h>
#include <string.h>

/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
*/

struct name{
    int variable1;
    char variable2[128];
    float variable3;
};

int main(void){

    struct name newvariable;
    newvariable.variable1 = 50;
    strcpy (newvariable.variable2 , "chocolate");
    newvariable.variable3 = 2.50;

    printf("Name: %s\nPrice: %.2f\nAmmount %d",newvariable.variable2,newvariable.variable3,newvariable.variable1);
    return 0;
}

/*Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му.*/

#include "list.h"

int main(void){

    init();
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    add(6);
    add(7);
    add(8);
    add(9);
    add(10);
    add(11);
    add(12);
    add(13);
    add(14);
    printf("%d",getElement(5));
    return 0;
}
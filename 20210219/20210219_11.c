#include <stdio.h>
#include <string.h>

/*Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.
*/

struct sp{
    struct sp *m_sp;
};

int main(void){

    struct sp sp1;
    struct sp sp2={&sp1};
    sp1.m_sp=&sp2;
    printf("%p\n",&sp1);
    printf("%p\n",sp2.m_sp);
    printf("%p\n",&sp2);
    printf("%p\n",sp1.m_sp);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"
Декларирането на static масив в скоупа на функцията означава, че ще бъде
видимо името му в целия файл и ще продължи да живее и след излизане от скоупа на
функцията след края на програмата. Функцията връща указател към съответния месец,
отговарящ на параметъра n.
*/

char *getMonth(int n);

int main(void){


    int n;
    printf("Enter month: ");
    scanf("%d",&n);

    char *month=getMonth(n);
    printf("%s",month);

    return 0;
}

char *getMonth(int n){
    static char *months[]={"Illegal month","January", "February","March","April","May","June","July","August","September","October","November","December"};
    if(n<1||n>12){
        return months[0];
    }

    return months[n];
}
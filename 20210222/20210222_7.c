/*Задача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/

#include <stdio.h>
#include <string.h>

union tag{
    int a;
    float b;
    char string[50];
};

int main(void){
    union tag tag;
    tag.a=5;
    printf("%d\n",tag.a);
    tag.b=3.14;
    printf("%.2f\n",tag.b);
    strcpy(tag.string,"Hello");
    printf("%s\n",tag.string);

    return 0;
}



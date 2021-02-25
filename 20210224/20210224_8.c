/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)*/
#include <stdio.h>
#define MY_CONCAT(x, y) x##y

int main()
{
    MY_CONCAT(print, f) ("This is test\n");
    return 0;
}

/*Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};*/

#include <stdio.h>
#pragma pack(1)

struct ssM{
    short i:3;
    char c:3;
};

int main(void){

    struct ssM ssM={3,7};
    printf("Int: %d\nChar:%c",ssM.i,ssM.c);

    return 0;
}
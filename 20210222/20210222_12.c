/*Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1)*/

#include <stdio.h>
#pragma pack(1)
struct ssM{
    short i:3;
    char c:6;
};

struct sM{
    char c:6;
    char c1:6;
    short i:3;
    short i1:3;
}__attribute__((packed));

int main(void){

    struct ssM ssM;
    struct sM sM;
    printf("ssM: %d\n",sizeof(ssM));
    printf("sM: %d\n",sizeof(sM));

    return 0;
}

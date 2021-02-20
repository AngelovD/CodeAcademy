#include <stdio.h>
#include <string.h>

/*Задача 3. Указатели към структура, предаване на структура на функция по
стойност и по референция*/

struct details{
    unsigned int m_Id;
    char m_Subject[256];
};

struct book{
    struct details details;
    char m_Title[64];
    char m_Author[64];

};

void printBookR(struct book *book){
    printf("%d\n",book->details.m_Id);
    printf("%s\n",book->m_Title);
    printf("%s\n",book->m_Author);
    printf("%s\n",book->details.m_Subject);
}

void printBookO(struct book book){
    printf("%d\n",book.details.m_Id);
    printf("%s\n",book.m_Title);
    printf("%s\n",book.m_Author);
    printf("%s\n",book.details.m_Subject);
}

int main(void){
    struct book a={{12,"Zeleno"},"GreenDay","Pesho"};
    strcpy(a.m_Author,"Orange");
    printBookR(&a);
    printBookO(a);
    return 0;
}
#include <stdio.h>
#include <string.h>

/*Задача 2. Инициализиране на структура, вложени структури
*/

struct details{
    unsigned int m_Id;
    char m_Subject[256];
};

struct book{
    struct details details;
    char m_Title[64];
    char m_Author[64];
};


int main(void){
    struct book a={{12,"Zeleno"},"GreenDay","Pesho"};
    strcpy(a.m_Author,"Orange");

    printf("%d\n",a.details.m_Id);
    printf("%s\n",a.m_Title);
    printf("%s\n",a.m_Author);
    printf("%s\n",a.details.m_Subject);
    return 0;
}
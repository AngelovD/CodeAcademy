#include <stdio.h>
#include <string.h>

/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

int atoi(char *s);
void itoa(int n, char *s);
float atof(char *s);
void reverse(char *s);

int main(void){

    int a=112;
    char s[]="12";
    printf("%f\n",atof(s));
    printf("%d\n",atoi(s));
    char d[]="222";
    itoa(a,d);
    reverse(d);
    printf("%s",d);
    return 0;
}

int atoi(char *s){
    int rez=0;
    while(*s!='\0'){
        rez*=10;
        rez+=(*s-'0');
        *s++;
    }
    return rez;
}

void itoa(int n, char *s){

    do{
        *s=(n%10)+'0';
        n/=10;
        *s++;
    }while(n>0);

}

float atof(char *s){

    char flagMinus = 1, flagDot = 0;
    float rez = 0, calcDot=1;
    if (*s == '-'){
        flagMinus = -flagMinus;
    }
    int i = 0;
    while (*s != '\0')
    {
        if (*s == '.'){
            flagDot = 1;
            *s++;
            continue;
        }
        if(*s<'0'||*s>'9'){
            *s++;
            continue;
        }else{
            if(flagDot){
                calcDot/=10;
                rez +=(*s-'0')*calcDot;
            }else{
                rez=rez*10+(*s-'0');
            }
        }
        *s++;
    }
    return rez*flagMinus;
}

void reverse(char *s)
{
    char *p, *q, tmp;

    q = s + strlen(s) - 1;
    for (p = s; p < q; ++p, --q) {
        tmp = *p;
        *p = *q;
        *q = tmp;
    }
}

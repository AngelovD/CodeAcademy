/*Задача 10.
 Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/

#include <stdio.h>
#include <math.h>

#define AVG(x,y) ((x+y)/2)
#define AVG_D(x,y,res) for(int i=(x);i<=(y);i++) {res+=i;} res/=(b)-(a);
#define POW(x,y,res) res=(x); for(int i=0;i<(y);i++) {res*=(x);}
#define TOUPPER(a) a-=32;
#define DISP(f,x) printf("sqrt (%d) = %g\n", (x), f(x));

int main(void){
    float res=0;
    int a=2,b=7,c;
    char m='b';
    AVG_D(a,b,res);
    POW(a,b,c);
    TOUPPER(m);
    DISP(sqrt,4);
    printf("%d\n",AVG(a,b));
    printf("%f\n",res);
    printf("%d\n",c);
    printf("%c\n",m);
    return 0;
}
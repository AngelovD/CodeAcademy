#include <stdio.h> 
#include <math.h>

int main(){

    int a = 186;
    int iMax = log2(a);
    int iCheck = 1;
    int iCounter = 1;
    int res;

    /*Не съм сигурен дали трябва да принтирам 0лите за това го правя както бихме го смятали по алгоритъма от първата лекция*/

    while(iCheck<=a){
        res=a&iCheck;
        printf("%d\n",res);
        iCheck=iCheck<<1;
    }

    return 0;
}
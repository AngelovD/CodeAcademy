#include <stdio.h> 
#include <math.h>

int main(){

    int a = 170;
    int iCounter = 0;
    int iMax = log2(a);
    int iMask = 1;
    int iOld = a&iMask;

    for(int i = 1; i<iMax+1;i++){
        a=a>>1;
        int res = a&iMask;
        if(res!=iOld){
            iCounter++;
        }
        iOld=res;
    }

    printf("%d",iCounter);

    return 0;
}
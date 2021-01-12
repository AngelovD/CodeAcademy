#include <stdio.h> 
#include <math.h>

int main(){

    int a = 203;
    int iCheck = 1;
    int iOld = a&iCheck;
    int iMax = log2(a);
    int iCounter= 0;

    for(int i = 0; i<iMax+1;i++){
        a = a>>1;
        int res = a&iCheck;
        if(res == 1 & iOld == 1){
            iCounter++;
            iOld=0;
        }else if(res==1){
            iOld = 1;
        }
    }

    printf("%d",iCounter);

    return 0;
}
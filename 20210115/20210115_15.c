#include <stdio.h>


int test(){
    static int gx=0;
    return gx++;
}

int main(){

    printf("%d\n",test());

    test();
    test();
    printf("%d\n",test());

    return 0;
}
#include <stdio.h>

extern int gx;

void test(){
    gx++;
}

int main(){

    printf("%d\n",gx);

    test();
    test();
    test();
    printf("%d\n",gx);

    return 0;
}

int gx = 0;
#include <stdio.h>

const float Pi = 3.14159;

float circle(float r){
    return Pi*r*r;
}

int main(){

    printf("%f\n",circle(1));
    printf("%f\n",circle(1.5));
    printf("%f\n",circle(13));

    return 0;
}
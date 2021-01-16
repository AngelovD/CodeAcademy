#include <stdio.h>

const float Pi = 3.14159;

float circle(float r){
    return Pi*r*r;
}

float elipse(float A, float B){
    return Pi*A*B;
}

int main(){

    printf("%f\n",circle(1));
    printf("%f\n",circle(1.5));
    printf("%f\n",circle(13));

    printf("%f\n",elipse(3,8));
    printf("%f\n",elipse(5.2,12.6));


    return 0;
}
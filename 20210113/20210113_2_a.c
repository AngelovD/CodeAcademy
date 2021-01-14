#include <stdio.h>
#include <math.h>

void bin(unsigned n) 
{ 
	unsigned i;
    unsigned iCheck = log2(n);
	for (i = 1 << iCheck; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(){

    bin(123);
    bin(256346);
    bin(255);

    return 0;
}
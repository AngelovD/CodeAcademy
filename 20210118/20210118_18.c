#include <stdio.h>

void light(unsigned n) 
{ 
	unsigned i;
    unsigned char lamp[8];
    unsigned iCheck = 7;
    for(char j=1; j<n+1;j++){
        printf("%d: ",j);
	    for (i = 1 << iCheck; i > 0; i = i >> 1 ) {
		    (j & i)? printf("*"): printf("."); 
        }
        printf("\n");
    }
	
}

int main(void){

    unsigned char x;
    printf("Lights(Up to 127)= ");
    scanf("%d",&x);
    light(x);

    return 0;
}

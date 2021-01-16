#include <stdio.h>
extern int g_nValue; 
int main() {
printf("Global variable = %d \n", g_nValue);
return 0;
}
int g_nValue = 321;
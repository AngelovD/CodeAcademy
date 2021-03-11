#include <stdio.h>
#include <signal.h>
#include <Windows.h>
void handleSignal(int iSignal)
{
    printf("\nHandle signal %d\n", iSignal);
}
int main()
{
    char string[50];
    signal(SIGINT, handleSignal);
    /*for ctrl+z*/
    /*signal(SIGTSTP, handleSignal);*/
    while(1)
    {   
        if(fread(string,1,50,stdin)==0){
            handleSignal(3);
            break;
        }
    }
    return 0;
}
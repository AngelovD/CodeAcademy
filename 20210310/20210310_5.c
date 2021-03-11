/*Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h*/

#include <stdio.h>
#include <signal.h>
#include <Windows.h>
void handleSignal(int iSignal)
{
    printf("\nHandle signal %d\n", iSignal);
}
int main()
{
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    while(1)
    {
        Sleep(1);
    }
    return 0;
}
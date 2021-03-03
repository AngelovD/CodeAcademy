/*Задача 10. Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и
int main() {
char cValue = '0';
short sValue = - (cValue + cValue);
unsigned short usValue = - (cValue + cValue);
int iValue = sValue;
unsigned int uiValue = sValue;
long lValue = iValue;
unsigned long ulValue = iValue;
float fValue = ulValue;
double dfValue = ulValue; return 0; }*/

#include <stdio.h>

int main()
{
    char cValue = '0';
    short sValue = -(cValue + cValue);
    unsigned short usValue = -(cValue + cValue);
    int iValue = sValue;
    unsigned int uiValue = sValue;
    long lValue = iValue;
    unsigned long ulValue = iValue;
    float fValue = ulValue;
    double dfValue = ulValue;
    return 0;
}
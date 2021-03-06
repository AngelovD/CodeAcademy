/*Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *height = malloc(sizeof(int));
    *height = 2918 - 1950;
    float *tempDiff = (float *)malloc(sizeof(float));
    *tempDiff = ((float)*height / 100) * 0.5;
    int flag;
    printf("For hut Vihren press 1\nFor peek Vihren press 2\n");
    fflush(stdin);
    scanf("%d", &flag);
    if (flag == 1)
    {
        *tempDiff = -*tempDiff;
    }
    else if (flag != 2)
    {
        printf("Wrong input");
    }
    float temp;
    printf("Enter temperature ");
    fflush(stdin);
    scanf("%f", &temp);
    if (flag == 1)
    {
        printf("Temperature on hut Vihren is %.2f, and on peek Vihren is %.2f", temp, temp + *tempDiff);
    }
    else if (flag == 2)
    {
        printf("Temperature on peek Vihren is %.2f, and on hut Vihren is %.2f", temp, temp + *tempDiff);
    }
    free(height);
    free(tempDiff);
    return 0;
}
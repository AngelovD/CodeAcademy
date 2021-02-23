/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/
#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
};

int main(void){
    struct date date = {21,2,2020};
    printf("day: %d\nmonth: %d\nyear: %d\n",date.day,date.month,date.year);
    date.day = 12;
    printf("day: %d\nmonth: %d\nyear: %d\n",date.day,date.month,date.year);
    struct date date1 = {.year=2020,.day=21, .month=2};
    printf("day: %d\nmonth: %d\nyear: %d\n",date1.day,date1.month,date1.year);



    return 0;
}
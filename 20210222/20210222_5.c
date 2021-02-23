/*Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.
struct name array[10]; 
array[i].member = value; 
struct name array[10]= { {1,3,2019}, {3,4,2020}} 
struct name array[10] = { [1] = {3,4,2020} }; 
struct name array[10] = {[1].month = 4,[1].year = 2020};*/

#include <stdio.h>
#include <string.h>


struct date{
    int day;
    int month;
    int year;
};

int main(void){
    struct date date[10];
    for(int i=0;i<10;i++){
        date[i].day=i+1;
        date[i].month=i+1;
        date[i].year=i+2000;
    }

    for(int i=0;i<10;i++){
        printf("%d.%d.%d\n",date[i].day,date[i].month,date[i].year);
    }

    return 0;
}
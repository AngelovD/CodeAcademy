
#include <stdio.h>
#include <string.h>

/*Задача 15.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/

struct tagTMyTime{
    int m_hours;
    int m_minutes;
    int m_seconds;
};

int getSeconds(struct tagTMyTime *time);
void addTime(struct tagTMyTime *time,int hours, int minutes, int seconds);
struct tagTMyTime makeTime(int hours, int minutes, int seconds);
struct tagTMyTime sumTime(struct tagTMyTime *time1,struct tagTMyTime *time2);
struct tagTMyTime minTime(struct tagTMyTime *time1,struct tagTMyTime *time2);
void printTime(struct tagTMyTime *time);

int main(void){

    struct tagTMyTime time1=makeTime(15,12,33);
    printf("TIme1: \n");
    printTime(&time1);
    struct tagTMyTime time2=makeTime(10,36,3);
    printf("TIme2: \n");
    printTime(&time2);
    printf("Time1 secs: %d\n",getSeconds(&time1));
    struct tagTMyTime time3=sumTime(&time1,&time2);
    printf("TIme3: \n");
    printTime(&time3);
    struct tagTMyTime time4=minTime(&time1,&time2);
    printf("TIme4: \n");
    printTime(&time4);

    return 0;
}

struct tagTMyTime makeTime(int hours, int minutes, int seconds){
    minutes+=seconds/60;
    hours+=minutes/60;
    minutes=minutes%60;
    seconds=seconds%60;
    struct tagTMyTime time={hours,minutes,seconds};
    return time;
}

void addTime(struct tagTMyTime *time,int hours, int minutes, int seconds){
    hours+=time->m_hours;
    minutes+=time->m_minutes;
    seconds+=time->m_seconds;
    minutes+=seconds/60;
    hours+=minutes/60;
    minutes=minutes%60;
    seconds=seconds%60;
    time->m_hours=hours;
    time->m_minutes=minutes;
    time->m_seconds=seconds;
}

int getSeconds(struct tagTMyTime *time){
    return time->m_seconds;
}

struct tagTMyTime sumTime(struct tagTMyTime *time1,struct tagTMyTime *time2){
    int hours=time1->m_hours;
    int minutes=time1->m_minutes;
    int seconds=time1->m_seconds;
    hours+=time2->m_hours;
    minutes+=time2->m_minutes;
    seconds+=time2->m_seconds;
    minutes+=seconds/60;
    hours+=minutes/60;
    minutes=minutes%60;
    seconds=seconds%60;
    return makeTime(hours,minutes,seconds);
}

struct tagTMyTime minTime(struct tagTMyTime *time1,struct tagTMyTime *time2){
    int hours=time1->m_hours;
    int minutes=time1->m_minutes;
    int seconds=time1->m_seconds;
    hours-=time2->m_hours;
    minutes-=time2->m_minutes;
    seconds-=time2->m_seconds;
    if(seconds<0){
        minutes--;
        seconds+=60;
    }

    if(minutes<0){
        hours--;
        minutes+=60;
    }

    if(hours<0){
        printf("Negative hours");
        struct tagTMyTime time;
        return time;
    }
    return makeTime(hours,minutes,seconds);
}

void printTime(struct tagTMyTime *time){
    printf("Hours: %d\n",time->m_hours);
    printf("Minutes: %d\n",time->m_minutes);
    printf("Seconds: %d\n",time->m_seconds);
}
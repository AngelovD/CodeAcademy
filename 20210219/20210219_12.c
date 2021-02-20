#include <stdio.h>
#include <string.h>
#include <math.h>

/*Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/

struct TPoint{
    int m_x;
    int m_y;
};

struct TPoint makePoint(int x,int y);
float findDis(struct TPoint *point1,struct TPoint *point2);

int main(void){ 

    struct TPoint point1=makePoint(2,3);
    struct TPoint point2=makePoint(5,7);
    printf("%.3f",findDis(&point1,&point2));

    return 0;
}

struct TPoint makePoint(int x,int y){
    struct TPoint point={x,y};
    return point;
}

float findDis(struct TPoint *point1,struct TPoint *point2){
    int disX,disY;
    int x1,x2,y1,y2;
    if(point1->m_x<point2->m_x){
        x1=point1->m_x;
        x2=point2->m_x;
    }else{
        x1=point2->m_x;
        x2=point1->m_x;
    }

    if(point1->m_y<point2->m_y){
        y1=point1->m_y;
        y2=point2->m_y;
    }else{
        y1=point2->m_y;
        y2=point1->m_y;
    }

    disX=x2-x1;
    disY=y2-y1;
    float rez= sqrt((disX*disX)+(disY*disY));
    return rez;
}
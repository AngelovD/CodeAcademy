#include <stdio.h>
#include <string.h>

/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/



struct point{
    int m_x;
    int m_y;
};

struct rect{
    struct point point1;
    struct point point2;
};

struct point makePoint(int x,int y);
void printRect(struct rect *rect);

int main(void){

    struct rect rect={makePoint(0,0),makePoint(15,15)};
    printRect(&rect);

    return 0;
}

struct point makePoint(int x,int y){
    struct point point={x,y};
    return point;
}

void printRect(struct rect *rect){
    printf("\n");
    for(int i=rect->point1.m_x;i<rect->point2.m_x;i++){
        printf("\n");
        for(int j=rect->point1.m_y;j<rect->point2.m_y;j++){
            printf("- ");
        }
    }
    printf("\n");
}
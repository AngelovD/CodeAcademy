#include <stdio.h>
#include <string.h>

/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

struct point{
    int m_x;
    int m_y;
};

struct point makePoint(int x,int y);

int main(void){

    struct point point1 = makePoint(2,4);
    struct point point2 = makePoint(6,9);

    printf("X1= %d Y1= %d\n",point1.m_x,point1.m_y);
    printf("X2= %d Y2= %d\n",point2.m_x,point2.m_y);

    return 0;
}

struct point makePoint(int x,int y){
    struct point point={x,y};
    return point;
}

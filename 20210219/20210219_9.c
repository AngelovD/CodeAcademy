#include <stdio.h>
#include <string.h>

/*Задача 9. Направете функця add(), която събира две точки.*/

struct point{
    int m_x;
    int m_y;
};

struct rect{
    struct point point1;
    struct point point2;
};

struct point makePoint(int x,int y);
struct point add(struct point *point1,struct point *point2);

int main(void){

    struct point point1 = makePoint(2,4);
    struct point point2 = makePoint(6,9);

    printf("X1= %d Y1= %d\n",point1.m_x,point1.m_y);
    printf("X2= %d Y2= %d\n",point2.m_x,point2.m_y);

    struct point point3 = add(&point1,&point2);
    printf("X3= %d Y3= %d\n",point3.m_x,point3.m_y);

    return 0;
}

struct point makePoint(int x,int y){
    struct point point={x,y};
    return point;
}

struct point add(struct point *point1,struct point *point2){
    return makePoint(point1->m_x+point2->m_x,point1->m_y+point2->m_y);
}

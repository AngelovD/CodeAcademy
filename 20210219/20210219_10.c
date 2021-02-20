#include <stdio.h>
#include <string.h>

/*Задача 10. Направете два триъгълника с отместване.
*/

struct point{
    int m_x;
    int m_y;
};

struct point makePoint(int x,int y);
void makeTri(struct point *point1,struct point *point2);

int main(void){

    struct point point1 = makePoint(2,4);
    struct point point2 = makePoint(6,8);

    makeTri(&point1,&point2);
    return 0;
}

struct point makePoint(int x,int y){
    struct point point={x,y};
    return point;
}

void makeTri(struct point *point1,struct point *point2){
    int x1,x2;
    int y1,y2;
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

    /*Проверка дали може да стане триъгълник и ако не - поправка на координатите*/
    if(x2-x1>y2-y1){
        y2-=((x2-x1)-(y2-y1));
    }else if(x2-x1<y2-y1){
        y2-=((y2-y1)-(x2-x1));
    }

    printf("%d\n",x1);
    for(int i=x1;i<=x2;i++){
        printf("\n");
        for(int z=0;z<2;z++){
            for(int j=0;j<=i-x1;j++){
                printf("@ ");
            }
            for(int j=y1+(i-x1);j<=y2;j++){
                printf("- ");
            }
            printf(" ");
        }
    
    }
}
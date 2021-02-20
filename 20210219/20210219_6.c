#include <stdio.h>
#include <string.h>

/*Задача 6. Направете по подобен начин триъгълник:*/

struct rect{
    char m_Sym[15][15];
};

struct point{
    int m_x;
    int m_y;
};


void fillRect(struct rect *rect,char symbol){
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            rect->m_Sym[i][j]=symbol;
        }
    }
}

void printRect(struct rect *rect){
    printf("\n");
    for(int i=0;i<15;i++){
        printf("\n");
        for(int j=0;j<15;j++){
            printf("%c ",rect->m_Sym[i][j]);
        }
    }
    printf("\n");
}

void addPoint(struct rect *rect,struct point *point){
    rect->m_Sym[point->m_x][point->m_y]='@';
}

void makeTri(struct rect *rect,struct point *point1,struct point *point2){
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

    for(int i=x1;i<=x2;i++){
        for(int j=y1+(i-x1);j<=y2;j++){
            rect->m_Sym[i][j]='@';
        }
    }
}

int main(void){

    struct rect rect;
    struct point a={3,4};
    struct point b={7,10};
    fillRect(&rect,'-');
    makeTri(&rect,&a,&b);
    printRect(&rect);
    return 0;
}
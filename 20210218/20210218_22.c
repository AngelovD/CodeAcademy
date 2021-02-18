#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Задача 22.
Дадена е шахматна дъска 8 х 8 с една фигура кон, в някой от
четирите ъгъла. Напишете програма, която движи коня по
стандартния начин: 2 полета в една посока и едно
перпендикулярно на избраната посока с 2-те полета. Програмата
извежда всеки ход на коня във вида A1, C2, ... и завършва, когато
всички полета на дъската са обходени.*/

void game(void);
int check(int *cur1,int *cur2,int d,int dS);
int checkD(int cur1,int cur2,int d, int *dS);

int main(void){
    srand(time(NULL));

    game();
    return 0;
}

void game(void){
    int board[8][8]={0};
    int cur1=0,cur2=0;
    int sum=0;
    printf("%c%c\n",'A'+cur1,'1'+cur2);
    while(sum<64){
        sum=0;
        board[cur1][cur2]=1;
        int d=rand()%4;
        int ds=rand()%2;
        if(check(&cur1,&cur2,d,ds)){
            printf("%c%c\n",'A'+cur1,'1'+cur2);
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                sum+=board[i][j];
            }
        }
    }


}

int check(int *cur1,int *cur2,int d, int dS){
    int dSS=dS;
    switch(d){
        case 0:
            if(*cur2-2>-1 && checkD(*cur1,*cur2,0,&dSS)){
                *cur2-=2;
                *cur1+=dSS;
                return 1;
            }else return 0;
        case 1:
            if(*cur1+2<9 && checkD(*cur1,*cur2,1,&dSS)){
                *cur1+=2;
                *cur2+=dSS;
                return 1;
            }else return 0;
        case 2:
            if(*cur2+2<9 && checkD(*cur1,*cur2,0,&dSS)){
                *cur2+=2;
                *cur1+=dSS;
                return 1;
            }else return 0;
        case 3:
            if(*cur1-2>-1 && checkD(*cur1,*cur2,1,&dSS)){
                *cur1-=2;
                *cur2+=dSS;
                return 1;
            }else return 0;
        default:
            return 0;
    }
}

int checkD(int cur1,int cur2,int d, int *dS){
    switch(d){
        case 0:
            if(*dS==0&&cur1-1>-1){
                *dS=-1;
                return 1;
            }else if(cur1+1<9){
                *dS=1;
                return 1;
            } else return 0;
        case 1:
            if(*dS==0&&cur2-1>-1){
                *dS=-1;
                return 1;
            }else if(cur2+1<9){
                *dS=1;
                return 1;
            } else return 0;
        default:
            return 0;
    }
}
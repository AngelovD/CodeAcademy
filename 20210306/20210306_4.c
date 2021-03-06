/*Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F
*/

#include <stdio.h>
#include <stdlib.h>

const int board[7][7]={
{3,3,2,4,3,1,2},
{2,4,2,3,2,4,3},
{4,2,3,2,4,2,1},
{4,4,1,2,2,3,4},
{3,2,3,3,4,2,2},
{3,2,4,2,3,2,1},
{1,1,3,3,4,2,0}};

int curX=0,curY=0,oldX=0,oldY=0;

void game();
void printBoard();
void goBack();
void move(int dir);



int main(void){

    game();

    return 0;
}


void game(){
    char input;
    int dir;
    printBoard(curX,curY);
    printf("You have %d moves\n",board[curY][curX]);
    printf("To go right press d\nTo go down press s\nTo go left press a\nTo go up press w\nTo go back press b\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(input){
        case 'w':
            dir=1;
            break;
        case 'd':
            dir=2;
            break;
        case 's':
            dir=3;
            break;
        case 'a':
            dir=4;
            break;
        case 'b':
            goBack();
            break;
        default:
            printf("Invalid input");
            game();
            break;
    }
    move(dir);
    if(curX==6&&curY==6){
        printf("You have won");
    }else{
        game();
    }
}

void move(int dir){
    switch (dir)
    {
    case 1:
        if(curY-board[curY][curX]>=0){
            oldY=curY;
            curY-=board[curY][curX];
        }
        break;
    case 2:
        if(curX+board[curY][curX]<7){
            oldX=curX;
            curX+=board[curY][curX];
        }
        break;
    case 3:
        if(curY+board[curY][curX]<7){
            oldY=curY;
            curY+=board[curY][curX];
        }
        break;
    case 4:
        if(curX-board[curY][curX]>=0){
            oldX=curX;
            curX-=board[curY][curX];
        }
        break;  
    default:
        break;
    }
}

void goBack(){
    curX=oldX;
    curY=oldY;
}

void printBoard(int curX, int curY){
    for(int i=0;i<7;i++){
        printf("\n");
        for(int j=0;j<7;j++){
            if(j==curX&&i==curY){
                printf(" P ");
            }else{
                printf(" %d ",board[i][j]);
            }
            
        }
    }
    printf("\n");
}
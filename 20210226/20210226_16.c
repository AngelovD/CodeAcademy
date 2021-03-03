/*_ _ _ _ _ _ _ _
9 10 11 12 13 14 15 16
1 2 3 4 5 6 7 8
Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.
*/
#include <stdio.h>
#include <stdlib.h>
 
typedef struct board{
    char m_board[3][8];
}t_Board;
void resetBoard(t_Board* board);
void printBoard(t_Board* board);
void game(t_Board* board,t_Board* oldBoard);
void copyBoard(t_Board* board, t_Board* oldBoard);
void backMove(t_Board* board, t_Board* oldBoard);
void checkGame(t_Board* board,t_Board* oldBoard);
 
int main(){
    t_Board board;
    t_Board oldBoard;
    resetBoard(&board);
    printBoard(&board);
    game(&board,&oldBoard); 
    return 0;
}
void resetBoard(t_Board* board){
    for(int i=0;i<8;i++){
        board->m_board[0][i] = '-';   
    }
    for(int i=0;i<8;i++){
        board->m_board[1][i] = i+9;  
    }
    for(int i=0;i<8;i++){
        board->m_board[2][i] = i+1;  
    }
}
void printBoard(t_Board* board){
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<8;j++){
            if(board->m_board[i][j]!='-'){
                printf("%2d ", board->m_board[i][j]);
            }
            else
            {
                printf("%2c ", board->m_board[i][j]);
            }
            
        }
    }
}
void game(t_Board* board,t_Board* oldBoard){
    
    copyBoard(board,oldBoard);
    
    printf("\n\nNumber to move:");
    int piece, posX, posY;
    int flag=0;
    fflush(stdin);
    scanf("%d",&piece);
    for(int i=0;i<3;i++){ 
        for(int j=0;j<8;j++){
            if(board->m_board[i][j]== piece){
               posX=j;
               posY=i;
               flag = 1;
               break; 
            } 
        }
        if(flag)
            break;
    }
    if(!flag){
        printf("No such piece");
        game(board,oldBoard);
    } 
        printf("\nFor up - w\nFor right - d\nFor down - s\nFor left - a\n");
        char move;
        fflush(stdin);
        scanf("%c",&move);
        switch(move){
        case 'w':
            if(posY==2 && board->m_board[0][posX]=='-' && board->m_board[1][posX]!='-'){
                board->m_board[0][posX]=board->m_board[2][posX];
                board->m_board[1][posX]= '-';
                board->m_board[2][posX]='-';
            }
            else
            {
                printf("Invalid move");
                game(board,oldBoard);
                break;
            }
            break;
        case 's':
            if(posY==0 && board->m_board[2][posX]=='-' && board->m_board[1][posX]!='-'){
                board->m_board[2][posX]=board->m_board[0][posX];
                board->m_board[1][posX]= '-';
                board->m_board[0][posX]='-';
            }
            else
            {
                printf("Invalid move");
                game(board,oldBoard);
                break;
            }
            break;
        case 'd':
            if(posX<=5 && board->m_board[posY][posX+2]=='-' && board->m_board[posY][posX+1]!='-'){
                board->m_board[posY][posX+2]=board->m_board[posY][posX];
                board->m_board[posY][posX+1]= '-';
                board->m_board[posY][posX]='-';
            }
            else
            {
                printf("Invalid move");
                game(board,oldBoard);
                break;
            }
            break;
        case 'a':
            if(posX>=2 && board->m_board[posY][posX-2]=='-' && board->m_board[posY][posX-1]!='-'){
                board->m_board[posY][posX-2]=board->m_board[posY][posX];
                board->m_board[posY][posX-1]= '-';
                board->m_board[posY][posX]='-';
            }
            else
            {
                printf("Invalid move");
                game(board,oldBoard);
                break;
            }
            break;
        default:
            printf("Something went wrong.");
            break;
        }
    printBoard(board);
    checkGame(board,oldBoard);
 
}
void copyBoard(t_Board* board, t_Board* oldBoard){
    for(int i=0;i<3;i++){ 
        for(int j=0;j<8;j++){
            oldBoard->m_board[i][j]=board->m_board[i][j];
        }
    }
}
void backMove(t_Board* board, t_Board* oldBoard){
    char choice;
    printf("\nIf you want to back press - n\nIf you want to exit press - x\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice=='n'){
        copyBoard(oldBoard,board);
        printBoard(board);
    }
    if(choice != 'x'){
        game(board,oldBoard);
    }
}
void checkGame(t_Board* board,t_Board* oldBoard){
    int counter=0;
    int flag1 = 0,flagNum = 0;
    for(int i=0;i<3;i++){ 
        for(int j=0;j<8;j++){
            if(board->m_board[i][j]!='-'){
                counter+=board->m_board[i][j];
                if(board->m_board[i][j]==1){
                    flag1 = 1;
                }
                if(j<7){
                    if(board->m_board[i][j+1] != '-'){
                        flagNum = 1;
                    }
                }
                if(j>0){
                    if(board->m_board[i][j-1] != '-'){
                        flagNum = 1;
                    }
                }
                if(i>0){
                    if(board->m_board[i-1][j] != '-'){
                        flagNum = 1;
                    }
                }
                if(i<3){
                    if(board->m_board[i+1][j] != '-'){
                        flagNum = 1;
                    }
                }
            }
        }
    }
    if(counter==1){
        printf("\nYou won");
        return;
    }
    if(!flag1){
        printf("\nYou lost");
        backMove(board,oldBoard);
        return;
    }
    if(!flagNum){
        printf("\nYou lost");
        backMove(board,oldBoard);
        return;
    }
    backMove(board,oldBoard);
}
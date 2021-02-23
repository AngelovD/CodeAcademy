/*Задача 16.
Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs*/
#include <stdio.h>
#include <string.h>

struct sU{
    int i;
    char string[10];
    double d;
    enum{
        false,
        true
    }e;
};

int main(int argc, char *argv[]){

    FILE* my_file = fopen("file.csv","r");
    struct sU sU[20];
    for(int i=0;i<20;i++){
        int got = fscanf(my_file, "%d,%s,%lf,%d", sU[i].i, sU[i].string,sU[i].d,sU[i].e);
        if (got != 4) break;
    }
    
    return 0;
}
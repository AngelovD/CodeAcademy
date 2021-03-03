/*Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

const int waterMelonDMin=15;
const int waterMelonDMax=140;
const float waterMelonPMin=0.5;
const float waterMelonPMax=3.5;
const int pumpkinDMin = 35;
const int pumpkinDMax = 95;
const float pumpkinPMin=0.3;
const float pumpkinPMax=0.9;
 
typedef struct {
    int size;
    float peel;
}watermelon;

int generateRandoms(int lower, int upper); /*generate 1 random number in range[low,upper] */
float averageMelons(watermelon *melons, int num);
void CompareMellons(watermelon *melons,int watermelonNum,watermelon *pumpkins,int pumpkinNum);
void createArr();
void fillArr(watermelon *melons, int num, int lowerSize, int upperSize, float pMin,float pMax);
float getAveragePeel(watermelon *melons,int num);
float getAverageDiameter(watermelon *melons,int num);
 
int main() 
{ 
    srand(time(0));
    

    createArr();
 
    return 0; 
} 

int generateRandoms(int lower, int upper) /*generate 1 random number in range[low,upper] */
{     int num = (rand() % (upper - lower + 1)) + lower; 
    return num;
} 

void createArr(){
    int A = rand()%21+5; /* number ot mellon */
    int B = rand()%21+5; /* number of pumpkin */
    watermelon *watermelons;
    watermelons =(watermelon*) malloc(A*sizeof(watermelon));
    watermelon *pumpkins;
    pumpkins =(watermelon*) malloc(B*sizeof(watermelon));

    printf("\nWatermelons:\n");
    fillArr(watermelons,A,waterMelonDMin,waterMelonDMax,waterMelonPMin,waterMelonPMax);
    printf("\nPumpkins:\n");
    fillArr(pumpkins,B,pumpkinDMin,pumpkinDMax,pumpkinPMin,pumpkinPMax);
    CompareMellons(watermelons,A,pumpkins,B);
}

void fillArr(watermelon *melons, int num, int lowerSize, int upperSize, float pMin,float pMax){
    for(int i=0;i<num;i++){
        melons[i].size= generateRandoms(lowerSize, upperSize);
        melons[i].peel= (float)generateRandoms(pMin*10, pMax*10)/10.0;
        printf("{%d ,%.2f}\n",melons[i].size, melons[i].peel);
    }

}

float averageMelons(watermelon *melons, int num){
    float average=0;

    for(int i=0;i<num;i++){
        average += (float)melons[i].size-melons[i].peel;
    }

    average /=num;
    return average;
}

float getAveragePeel(watermelon *melons,int num){
    float average=0;

    for(int i=0;i<num;i++){
        average += melons[i].peel;
    }

    average /=num;
    return average;
}

float getAverageDiameter(watermelon *melons,int num){
    float average=0;

    for(int i=0;i<num;i++){
        average += melons[i].size;
    }

    average /=num;
    return average;
}

void CompareMellons(watermelon *melons,int watermelonNum,watermelon *pumpkins,int pumpkinNum){

    if(averageMelons(melons,watermelonNum)>averageMelons(pumpkins,pumpkinNum)){
        printf("\nIt is better to buy melons watermelons with average diameter X = %.2f and average peel tick D = %.2f,\
            \nthan waterlemmons pumpkin with average diameter Y = %.2f and average peel tick D2 = %.2f",
            getAverageDiameter(melons,watermelonNum),getAveragePeel(melons,watermelonNum),
            getAverageDiameter(pumpkins,pumpkinNum),getAveragePeel(pumpkins,pumpkinNum));
    }else{
        printf("\nIt is better to buy melons pumpkin with average diameter X = %.2f and average peel tick D = %.2f,\
            \nthan waterlemmons pumpkin with average diameter Y = %.2f and average peel tick D2 = %.2f",
            getAverageDiameter(pumpkins,pumpkinNum),getAveragePeel(pumpkins,pumpkinNum),
            getAverageDiameter(melons,watermelonNum),getAveragePeel(melons,watermelonNum)
            );
    }
    free(melons);
    free(pumpkins);
    
}
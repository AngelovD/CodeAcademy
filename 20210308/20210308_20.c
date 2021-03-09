/*Задача 20.Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
1 12
2 21
3 31
4 40
5 49
6 58
7 69
8 79
9 90
10 101
Задачи за самоподготовка
Пътник иска да пътува n (1<=n<=100) километра. Какви разстояния на пътуване трябва
да избере, така че пътуването да му излезе най-евтино, и каква е цената на цялото
пътуване? Напишете програма, която да реши проблема.
Входни данни: В първия ред от входния файл INPUT3.TXT са записани 10 цели числа,
които са цените за пътуване, съответно на 1,2,3... ,10 километра, а във втория ред е
записано само числото n.
Изходни данни: Всеки ред без последния от изходния файл OUTPUT3.TXT трябва да
съдържа две числа - дължината на маршрута и цената на билета. Цената на цялото
пътуване трябва да се запише на последния ред от изходния файл.
Примерен вход
INPUT3.TXT
12 21 31 40 49 58 69 79 90 101
15
Примерен изход
OUTPUT3.TXT
3 31
6 58
6 58
147 
*/

#include <stdio.h>

int main(void){
    FILE *pfile = NULL;
    char *filename = "taxi.txt";
    pfile = fopen(filename, "rt");
    int input[11]={0};
    float costKm=0;
    int leastP=0;
    int dist;
    int price=0;
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    else
    {
        printf("%s is open\n", filename);
        int km;
        int i=0;
        while(fscanf(pfile,"%d ",&km)!=EOF){
            input[i]=km;
            i++;
        }
    }
    costKm=(float)input[0]/1;
    for(int i=1;i<10;i++){
        if(costKm>(float)input[i]/(i+1)){
            costKm=(float)input[i]/(i+1);
            leastP=i;
        }
    }
    dist=input[10];
    leastP+=1;
    while(dist>leastP){
        printf("%d\n",dist);
        printf("%d %d\n",leastP,input[leastP-1]);
        price+=input[leastP-1];
        dist-=leastP;
    }
    printf("%d %d\n",dist,input[dist-1]);
    price+=input[dist-1];
    printf("%d",price);
    fclose(pfile);

    return 0;
}
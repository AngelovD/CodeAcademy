/*Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int weight;
    float w_price;
    int size;
    float s_price;
}order;

const int c_weight[2][9]={{20,50,100,200,350,500,1000,2000,3000},{46,69,102,175,213,244,320,427,503}};
const int c_size[2][9]={{10,50,100,150,250,400,500,600,-1},{1,11,22,33,56,150,311,489,579}};

order makeOrder(int weight, int size);
float getPrice(order* orders,int size);
void menu();

int main(void){

    menu();

    return 0;
}

void menu(){
    printf("How many orders would you like?");
    fflush(stdin);
    int order_count;
    int total_weight=0,total_size=0;
    scanf("%d",&order_count);
    order* orders;
    orders=(order*)malloc(order_count*sizeof(order));
    for(int i=0;i<order_count;i++){
        int weight,size;
        printf("Enter %d order weight: ",i+1);
        fflush(stdin);
        scanf("%d",&weight);
        printf("Enter %d order size: ",i+1);
        fflush(stdin);
        scanf("%d",&size);
        orders[i]=makeOrder(weight,size);
        total_size+=size;
        total_weight+=weight;
    }

    order bigOrder=makeOrder(total_weight,total_size);
    float total_price = getPrice(orders,order_count);
    if((bigOrder.s_price+bigOrder.w_price)>=total_price){
        printf("For orders with weigt %d and size %d it's better to send them separate, and it will cost: %.2f",total_weight,total_size,total_price);
    }else{
        printf("For orders with weigt %d and size %d it's better to send them together, and it will cost: %.2f",total_weight,total_size,(bigOrder.s_price+bigOrder.w_price));
    }
    free(orders);
}

float getPrice(order* orders,int size){
    float price=0;
    for(int i=0;i<size;i++){
        price+=orders[i].w_price;
        price+=orders[i].s_price;
    }
    return price;
}

order makeOrder(int weight, int size){
    float w_price=0;
    float s_price=0;
    if(weight<c_weight[0][0]){
        w_price=c_weight[1][0];
    }
    if(size<c_size[0][0]){
        s_price=c_size[1][0];
    }
    for(int i=0;i<8;i++){
        if(weight>c_weight[0][i]&&weight<=c_weight[0][i+1]){
            w_price=c_weight[1][i+1];
            break;
        }
    }
    if(w_price==0){
        w_price=c_weight[1][8];
    }

    for(int i=0;i<8;i++){
        if(size>c_size[0][i]&&size<=c_size[0][i+1]){
            s_price=c_size[1][i+1];
            break;
        }
    }
    if(s_price==0){
        s_price=c_size[1][8];
    }

    w_price/=100;
    s_price/=100;
    order order={weight,w_price,size,s_price};
    return order;
}
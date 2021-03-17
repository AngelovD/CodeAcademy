#include "tree.h"

/*Задача 4. Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на*/

int main(void){

    int arr[11]={6, 5, 10, 3, 8, 13, 1, 7, 11, 14, 12};
    for(int j=0;j<11;j++){
        insert(arr[j]);
    }
    printTree();
    del(1);
    del(7);
    del(12);
    del(14);
    printf("\n\n");
    printTree();
    
    
    return 0;
}
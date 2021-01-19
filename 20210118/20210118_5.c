#include <stdio.h>

int main(){

    int x = 1, y = 0;
    int z = y || x;

    printf("\nInit values: X= %d, Y= %d\n", x, y);

    x = 1 + 2, 2 * 3, 3 + 4;
    y = (7 * 8, 8 + 9, 9 - 4);

    //Запетаите се изпълняват от ляво на дясно и за това x приема само първата стойност а y получава последната
    printf("\nX= %d, Y= %d\n", x, y);

    return 0;
}
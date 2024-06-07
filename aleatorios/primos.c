#include <stdio.h>

int main (){
    int lim, i;

    printf("Numero de limite:\n");
    scanf("%d", &lim);

    for (i = 1; i <= lim; i++){
        if (i%2 != 0 | i%3 != 0 | i%5 != 0 | i%7 != 0 | i == 2 | i == 3 | i == 5 | i == 7){
            printf("%d\n", i);       
        }
    }
    return 0;
}

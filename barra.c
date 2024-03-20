#include <stdio.h>

int main() {
    char barra[10] = "#";

    for(int i = 0; i < 10; i++){
        printf("%d",i);
        sleep(1);
    }

    printf("%s", barra);
}

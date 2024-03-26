#include <stdio.h>
#include <stdlib.h>

int word() {
    char *words[6] = {"abacate", "castor", "molejo", "tucano", "teclado"};
    srand(time(NULL));

    int x = rand() % 4;

    char *palavra_final = words[x];

    return palavra_final;
}

int main() {
    printf("%d", strlen(word()));
}

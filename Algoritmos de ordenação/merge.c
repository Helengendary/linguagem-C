#include <stdio.h>
#include <stdlib.h>

void Merge(int array[], int tam) {

    if (tam == 1) {
        printf("%d ", array[0]);
        return;
    }

    int sizePrimeira = tam/2;
    int sizeSegunda = tam/2 + (tam%2); 

    Merge(array, sizePrimeira);
    Merge(array+sizePrimeira, sizeSegunda);
}

int main() {
    int array[6] = {6,5,4,3,2,1};

    int tamanho = 6;

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");

    Merge(array, tamanho);
}
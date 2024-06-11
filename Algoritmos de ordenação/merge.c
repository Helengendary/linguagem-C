#include <stdio.h>

int Merge(int array[], int tam) {

    if (tam == 3) {
        return 1;
    }
}

int i = 0;

void MergeSort(int array[], int tam) {

    if (tam == 1) {
        printf("%d ", array[0]);
        i++;
        return;
    }

    int sizePrimeira = tam/2;
    int sizeSegunda = tam/2 + (tam%2); 

    MergeSort(array, sizePrimeira);
    MergeSort(array+sizePrimeira, sizeSegunda);
    
}

int main() {
    int array[6] = {1,2,3,4,5,6};

    int tamanho = 6;

    MergeSort(array, tamanho);
}
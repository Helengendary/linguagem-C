#include <stdio.h>

int Bubble(int array[], int tam) {

    for (int h = tam; h > 0; h--)
    {
        for (int i = 0; i < h; i++)
        {
            if (array[i] > array[i+1]) {
                int aux = array[i+1];
                array[i+1] = array[i];
                array[i] = aux;
            }
        }
    }     
}

int main() {

    int array[5] = {9,8,7,6,5};

    for (int i = 0; i < (sizeof(array)/4); i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
    Bubble(array, sizeof(array)/4);
    
    for (int i = 0; i < (sizeof(array)/4); i++)
    {
        printf("%d ", array[i]);
    }
}
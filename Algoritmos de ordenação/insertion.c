#include <stdio.h>

int Insertion(int array[], int tam) {
    for (int i = 0; i < tam; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j] < array[j-1]) {
                int aux = array[j-1];
                array[j-1] = array[j];
                array[j] = aux;
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
    Insertion(array, sizeof(array)/4);
    
    for (int i = 0; i < (sizeof(array)/4); i++)
    {
        printf("%d ", array[i]);
    }
}
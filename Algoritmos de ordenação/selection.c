#include <stdio.h>

int Selection(int array[], int tam) {
    for (int i = 0; i < tam; i++)
    {
        for (int h = i+1; h < tam; h++)
        {
            if (array[h] < array[i]){}
            {
                int aux = array[i];
                array[i] = array[h];
                array[h] = aux;
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
    Selection(array, sizeof(array)/4);
    
    for (int i = 0; i < (sizeof(array)/4); i++)
    {
        printf("%d ", array[i]);
    }
}
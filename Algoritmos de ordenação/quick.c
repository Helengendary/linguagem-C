#include <stdio.h>

int Quick(int array[], int size) {

    if (size == 1)
    {
        return;
    }
    

    int povit = array[size-1];

    int halfum = size-1/2;
    int halfois = size-1/2 + (size%2);

    int i = -1;
    int j = 0;

    while (j < size)
    {
        if (j > povit)

        j++;
    }
    
    Quick(array, halfum);
    Quick(array+halfum, halfois);
}

int main() {

    int array[5] = {9,8,7,6,5};

    for (int i = 0; i < (sizeof(array)/4); i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
    Quick(array, sizeof(array)/4);
    
    for (int i = 0; i < (sizeof(array)/4); i++)
    {
        printf("%d ", array[i]);
    }
}
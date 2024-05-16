#include <stdio.h>
#include <stdlib.h>
#ifndef FILA_H
#define FILA_H

int *array = NULL;
int size = 0; 
int capacidade = 5;

void Enqueue(int value){
    if (array == NULL)
    {
        array = (int *)malloc(capacidade * sizeof(int));
    }

    if (size >= capacidade)
    { 
        capacidade = capacidade * 2;
        array = (int *)realloc(array, capacidade * sizeof(int));
    }
    
    array[size] = value;
    size++;
}

void Dequeue() {
    array[0] = NULL;
    size--;

    for (int i = 0; i < size; i++)
    {
        array[i] = array[i + 1];
    }

    printf("primeiro removido!\n");
}

void GetSize() {
    printf("size: %d\n", size);
}

void get(int index) {

    if (index < 0 || index > size)
    {
        printf("Index nao localizado!\n");
    } else {

       printf("array[%d]: %d\n", index, array[index]);
    }
    
}

void ultimo() {
    printf("ultimo: %d\n", array[size-1]);
}

#endif // !FILA_H

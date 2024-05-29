#include <stdio.h>
#include <stdlib.h>
#ifndef PILHA_H
#define PILHA_H

int *array = NULL;
int size = 0;
int capacidade = 5;

void GetSize() {
    printf("size: %d\n", size);
}

void get(int index) {

    if (index < 0 || index > size)
    {
        printf("Index nao localizado!");
    } else {

       printf("array[%d]: %d", index, array[index]);
    }
    
}

void push (int value) {

    if (array == NULL)
    {
        array = malloc(capacidade * sizeof(int));
    }

    if (size >= capacidade)
    { 
        capacidade = capacidade * 2;
        array = realloc(array, capacidade * sizeof(int));
    }
    
    array[size] = value;
    size++;
}

void pop()
 {
    size--;
    printf("Topo removido\n");
 }

void ultimo() {
    printf("ultimo: %d\n", array[size-1]);
}

void peek(){
    printf("peek: %d\n", array[0]);
}

#endif // !PILHA_H
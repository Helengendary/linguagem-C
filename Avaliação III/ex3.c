#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *array = NULL;
int size = 0;
int tamanho = 2;

void Enqueue(int value){

    if (size == 0) {
        array = malloc( tamanho * sizeof(int));
    }

    if (size == tamanho) {

        tamanho *= 2;
        array = (int *)realloc(array, tamanho * sizeof(int));
    }

    array[size] = value;
    size++;
}

void Dequeue() {
    size--;

    for (int i = 0; i < size; i++)
    {
        array[i] = array[i+1];
    }
}

void VerificarTamanho() {

    if (size == 0) {
        printf("A pilha esta vazia! :(\n\n");
    } else
    {
        printf("Existem %d valores na pilha\n\n", size);
    }
}

int VerificarPrimeiro() {

   return array[0]; 
}

int main() {
    Enqueue(4);
    Enqueue(5);
    Enqueue(9);
    Enqueue(2);
    Enqueue(1);
    printf("Primeiro antes do dequeeu: %d\n", VerificarPrimeiro());
    Dequeue();
    printf("Primeiro depois do dequeeu: %d\n", VerificarPrimeiro());
    free(array);
}

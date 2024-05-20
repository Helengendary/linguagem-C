#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *array = NULL;
int size = 0;
int tamanho = 2;

void Push(int value){

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

void Pop() {

    size--;
    array[size] = NULL;
}

int Peek() {

    return array[size-1];
}

void VerificarTamanho() {

    if (size == 0) {
        printf("A pilha esta vazia! :(\n\n");
    } else
    {
        printf("Existem %d valores na pilha\n\n", size);
    }
}

int main() {
    Push(4);
    Push(7);
    Push(9);
    Push(0);
    printf("Peek antes do pop: %d\n", Peek());
    Pop();
    printf("Peek depois do pop: %d\n", Peek());
}
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
    struct Node *prev;
} Node;

int size = 0;
Node *tail = NULL;

void Push(int value) {

    Node *node;
    node = malloc(sizeof(Node));

    if (tail == NULL)
    {
        node->value = value;
        node->next = NULL;
        node->prev = NULL;

        tail = node;
        size++;
        return;
    }
    
    node->value = value;
    node->next = NULL;
    node->prev = tail;
    tail->next = node;
    tail = node;
    size++;
}

void Pop() {

    tail->next = NULL;
    size--;
}

int Peek() {

    return tail->value;
}

void Verificar() {

    if (size == 0) {
        printf("\nEsta vazia!\n");
    } else {
        printf("\nPossui %d itens dentro da lista.\n", size);
    }
}
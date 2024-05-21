#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
    struct Node *prev;
} Node;

Node *tail = NULL;
Node *head = NULL;

int size = 0;

void Push(int value) {

    Node *node;
    node = malloc(sizeof(Node));

    if (head == NULL)
    {
        node->value = value;
        node->next = NULL;
        node->prev = NULL;

        tail = node;
        head = node;
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

int main() {
    
    Push(8);
    Push(3);
    Push(2);
    Push(5);
    
    Node *noValor = head->next;
    printf("%d\n", noValor->value);
    printf("%d", tail->value);
    
    Dequeue();
    
    Node *nao = head->next;
    printf("%d\n", nao->value);
    printf("%d", tail->value);
}
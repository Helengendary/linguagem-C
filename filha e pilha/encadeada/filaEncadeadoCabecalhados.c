#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
} Node;

Node *head = NULL;
Node *current = NULL;

int size = 0;

void Enqueue(int value) {

    Node *node;
    node = malloc(sizeof(Node));

    if (current == NULL)
    {
        head->value = NULL;
        head->next = node;
        node->value = value;
        node->next = NULL;

        current = node;
        size++;
        return;
    }
    
    current->next = node;
    node->value = value;
    node->next = NULL;
    current = node;
    size++;
}

void Dequeue() {

    Node *excluido = NULL;
    excluido = head->next;
    excluido = excluido->next; 
    size--;
}

int main() {

    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);

    printf("ffdhsda");

}
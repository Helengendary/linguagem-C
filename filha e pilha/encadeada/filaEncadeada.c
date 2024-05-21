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

void Enqueue(int value) {

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

void Dequeue() {

    head = head->next;
    head->prev = NULL;
    size--;
}

int main() {
    
    Enqueue(8);
    Enqueue(3);
    Enqueue(2);
    Enqueue(5);
    
    Node *noValor = head->next;
    printf("%d\n", noValor->value);
    printf("%d", tail->value);
    
    Dequeue();
    
    Node *nao = head->next;
    printf("%d\n", nao->value);
    printf("%d", tail->value);
}
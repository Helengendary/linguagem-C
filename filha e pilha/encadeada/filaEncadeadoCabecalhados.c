#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
} Node;

typedef struct
{
    Node *next;
} Head;

Node *tail = NULL;
Head *head = NULL;

int size = 0;

void Enqueue(int value) {

    Node *node;
    node = malloc(sizeof(Node));

    if (head->next == NULL)
    {
        node->value = value;
        node->next = NULL;
        head->next = node;

        tail = node;
        size++;
        return;
    }
    
    node->value = value;
    node->next = NULL;
    tail->next = node;
    tail = node;
    size++;
    free(node);
}

void Dequeue() {

    Node *next = head->next;
    head->next = next->next;
    size--;
}

int main() {
    
    Enqueue(8);
    Enqueue(3);
    Enqueue(2);
    Enqueue(5);

    printf("%d", tail->value);
    
    Dequeue();
    
    printf("%d", tail->value);
}
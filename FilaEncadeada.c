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

    if (tail == NULL)
    {
        node->value = value;
        node->next = NULL;
        node->prev = NULL;

        tail = node;
        head = node;
        size++;
        return;
    }

    if (head->next == NULL) {
        tail = head;
    }
    
    node->value = value;
    node->next = head;
    node->prev = NULL;
    head->prev = node;
    head = node;
    size++;
}

int main() {
    
    Enqueue(8);
    Enqueue(3);
    Enqueue(2);
    Enqueue(5);
    
    Node *next = head->next;
    printf("%d\n", next->value);
    printf("%d", tail->value);
}

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
} Node;

Node *tail = NULL;
Node *head = NULL;
int rodadas = 0;

int size = 0;

void Enqueue(int value) {

    Node *node;
    node = malloc(sizeof(Node));

    if (rodadas == 0)
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
    rodadas++;
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
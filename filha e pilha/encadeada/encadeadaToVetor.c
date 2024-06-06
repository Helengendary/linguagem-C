#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
    struct Node *prev;
} Node;

Node *head = NULL;
Node *tail = NULL;

int size = 0;

void add(int value) {

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
    
    node->value = value;
    node->prev = tail;
    node->next = NULL;
    tail->next = node;
    tail = node;
    size++;
}

int main(){

    int array[5];

    add(1);
    add(2);
    add(3);
    add(4);
    add(5);

    Node *next = head->next;
    printf("%d\n", next->value);
    printf("%d\n\n", tail->value);
    
    Node *current = head;

    for (int i = 0; current != NULL; i++)
    {
        array[i] = current->value;
        printf("\n%d", array[i]);
        current = current->next;
    }
    
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo{
    int ano;
    struct Veiculo *next;
}Veiculo;

void displayLL(Veiculo *p)
{
    printf("Mostrando a lista:\n"); 
    if(p)
    {
        do
        {
            printf(" %d", p->ano);
            p=p->next;
        }
        while(p);
    }
    else
        printf("Lista vazia.");
}

int main(void)
{
    Veiculo *pNode1;
    Veiculo *pNode2;
    Veiculo *pNode3;

    pNode1 = malloc(sizeof(Veiculo));
    pNode1->ano = 2022;
    pNode2 = malloc(sizeof(Veiculo));
    pNode2->ano = 2012;
    pNode3 = malloc(sizeof(Veiculo));
    pNode3->ano = 2004;

    pNode1->next = pNode2;
    pNode2->next = pNode3;
    pNode3->next = NULL;

     if(pNode1)  
        displayLL(pNode1);
    
}
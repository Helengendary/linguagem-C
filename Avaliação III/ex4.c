#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;


typedef struct
{
    char titulo[100];
    char descricao[100];
    Data data;
    Data vencimento;
    char status[20];
}Tarefas;

int main() {
    int quantidade = 0, op = 0, size = 0, helena = 1;
    char excluir[90], visu[90], atu[90];
    Tarefas taf[quantidade];

    while (helena == 1)
    {
    
    printf("1 - Criar tarefa\n2 - Excluir\n3 - visu\n0 - sair");
    scanf("%d", &op);


    switch (op)
    {
    case 1:

        printf("\n\n-------------------\n   NOVA TAREFA\n-------------------\n");

        printf("\nTitulo da tarefa: ");
        scanf("%s", taf[size].titulo);

        printf("\nDescricao da tarefa: ");
        scanf("%s", taf[size].descricao);

        printf("Dia de criacao: ");
        scanf("%d", &taf[size].data.dia);

        printf("Mes de criacao: ");
        scanf("%d", &taf[size].data.mes);

        printf("Ano de criacao: ");
        scanf("%d", &taf[size].data.ano);

        printf("Dia de vencimento: ");
        scanf("%d", &taf[size].vencimento.dia);

        printf("Mes de vencimento: ");
        scanf("%d", &taf[size].vencimento.dia);

        printf("Ano de vencimento: ");
        scanf("%d", &taf[size].vencimento.dia);

        printf("\nStatus: ");
        scanf("%s", taf[size].status);
        size++;
        break;

    case 2:
        printf("Qual tarefa quer excluir: ");
        scanf("%s", excluir);

        for (int i = 0; i < size; i++)
        {
            if (strcmp(excluir, taf[i].titulo) == 0)
            {

                for (int j = i; j < size; j++)
                {
                    taf[i] = taf[i+1];
                }
                size--;
                break;
            }
            
        }
        break;

    case 3: 

        printf("\NQual tarefa quer visualizar: ");
        scanf("%s", visu); 

        for (int i = 0; i < size; i++)
        {
            if (strcmp(visu, taf[i].titulo) == 0)
            {

                printf("\nTitulo: %s", taf[i].titulo);
           
                printf("\nDescricao: %s", taf[i].descricao);
  
                printf("\nDia de criacao: %d", &taf[i].data.dia);

                printf("\nMes de criacao: %d", &taf[i].data.mes);
         
                printf("\nAno de criacao: %d", &taf[i].data.ano);

                printf("\nDia de vencimento: %d", &taf[i].vencimento.dia);
       
                printf("\nMes de vencimento: %d", &taf[i].vencimento.dia);
          
                printf("\nAno de vencimento: %d", &taf[i].vencimento.dia);

                printf("\nStatus: %s\n", taf[i].status);
                break;
            }
            
        }       
        break;

    case 4: 

        printf("Qual tarefa quer atualizar: ");
        scanf("%s", atu);

        for (int i = 0; i < size; i++)
        {
            if (strcmp(atu, taf[i].titulo) == 0)
            {
                printf("\n\n-------------------\nATUALIZAR TAREFA\n-------------------\n");

                printf("\nTitulo da tarefa: ");
                scanf("%s", taf[i].titulo);

                printf("\nDescricao da tarefa: ");
                scanf("%s", taf[i].descricao);

                printf("Dia de criacao: ");
                scanf("%d", &taf[i].data.dia);

                printf("Mes de criacao: ");
                scanf("%d", &taf[i].data.mes);

                printf("Ano de criacao: ");
                scanf("%d", &taf[i].data.ano);

                printf("Dia de vencimento: ");
                scanf("%d", &taf[i].vencimento.dia);

                printf("Mes de vencimento: ");
                scanf("%d", &taf[i].vencimento.dia);

                printf("Ano de vencimento: ");
                scanf("%d", &taf[i].vencimento.dia);

                printf("\nStatus: ");
                scanf("%s", taf[i].status);
                break;
            }
        }       
        break;
    
    case 0: 
        helena = 0;
        break;
    default:
        break;
    
    }

    }    
}
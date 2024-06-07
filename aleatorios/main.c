#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char rua[100];
    int numeroEndereco;
    char complemento[100];
    char bairro[50];
    int CEP;
    char cidade[50];
    char estado[50];
    char pais[50];

} Endereco;

typedef struct {

    int DDD;
    int numeroTelefone;
} Telefone;

typedef struct {

    int dia;
    int mes;
    int ano;
} Niver;

typedef struct
{
    char nome[100];
    char email[100];
    Endereco endereco;
    Telefone telefone;
    Niver niver;
    char observacao[200];

} ListaTelefonica;

int main() {
    ListaTelefonica *telefone = NULL;

    int helena = 1;

    for (int i = 0; helena == 1; i++)
    {
        int user = 0;
        printf("0 - Sair\n1 - Adicionar contato\n2 - Buscar pelo primeiro nome\n");
        scanf("%d", &user);

        char name[50], pseuName[50];

        switch (user)
        {
            case 1:
                
                telefone = (ListaTelefonica *)realloc(telefone, (i + 1) * sizeof(ListaTelefonica));

                char NOME[100], EMAIL[100], RUA[100], COMPLEMENTO[100], BAIRRO[50], CIDADE[50], ESTADO[50], PAIS[50], OBS[200];
                printf("\nNome: ");
                scanf(" %99[^\n]", NOME);
                strcpy(telefone[i].nome, NOME);

                printf("Email: ");
                scanf(" %99[^\n]", EMAIL);
                strcpy(telefone[i].email, EMAIL);

                printf("\nEndereco:\n");

                printf("  Rua: ");
                scanf(" %99[^\n]", RUA);
                strcpy(telefone[i].endereco.rua, RUA);
                
                printf("  Numero: ");
                scanf("%d", &telefone[i].endereco.numeroEndereco);

                printf("  Complemento: ");
                scanf(" %99[^\n]", COMPLEMENTO);
                strcpy(telefone[i].endereco.complemento, COMPLEMENTO);
                
                printf("  Bairro: ");
                scanf(" %50[^\n]", BAIRRO);
                strcpy(telefone[i].endereco.bairro, BAIRRO);
                
                printf("  CEP: ");
                scanf("%d", &telefone[i].endereco.CEP);
                
                printf("  Cidade: ");
                scanf(" %50[^\n]", CIDADE);
                strcpy(telefone[i].endereco.cidade, CIDADE);
                
                printf("  Estado: ");
                scanf(" %50[^\n]", ESTADO);
                strcpy(telefone[i].endereco.estado, ESTADO);
                
                printf("  Pais: ");
                scanf(" %50[^\n]", PAIS);
                strcpy(telefone[i].endereco.pais, PAIS);
                
                printf("\nTelefone:\n");

                printf("  DDD: ");
                scanf("%d", &telefone[i].telefone.DDD);

                printf("  Numero: ");
                scanf("%d", &telefone[i].telefone.numeroTelefone);
                
                printf("\nAnivesario:\n");

                printf("  Dia: ");
                scanf("%d", &telefone[i].niver.dia);

                printf("  Mes: ");
                scanf("%d", &telefone[i].niver.mes);

                printf("  Ano: ");
                scanf("%d", &telefone[i].niver.ano);

                printf("OBS: ");
                scanf(" %199[^\n]", OBS);
                strcpy(telefone[i].observacao, OBS);
                break;

                
            case 2:

    
                printf("Primeiro nome: ");
                scanf("%s", name);

                for (int h = 0; h < strlen(telefone)/4; h++)
                {
                    // for (int t = 0; t < strlen(name)/4; t++)
                    // {
                    //     // if (strcmp(telefone[h].nome[t], " ") == 0) {
                    //     //     break;
                    //     // }
                    //     if (strcmp(telefone[h].nome[t], name[t]) == 0) {
                    //         pseuName[t] += name[t];
                    //     } else {
                    //         break;
                    //     }
                        
                    // }
                    
                    if (strcmp(telefone[h].nome, name) == 0)
                    {
                        printf("\nNome: %s", telefone[h].nome);
                        printf("\nEmail: %s", telefone[h].email);
                        printf("\nEndereco: Rua %s, %d - %s , %s %s , %s - %d", telefone[h].endereco.rua, telefone[h].endereco.numeroEndereco, telefone[h].endereco.bairro, telefone[h].endereco.cidade, telefone[h].endereco.estado, telefone[h].endereco.pais, telefone[h].endereco.CEP);
                        printf("\nTelefone: (%d) %d", telefone[h].telefone.DDD, telefone[h].telefone.numeroTelefone);
                        printf("\nNacimento: %d/%d/%d", telefone[h].niver.dia, telefone[h].niver.mes, telefone[h].niver.ano);
                        printf("\nOBS: %s", telefone[h].observacao);
                    } else {
                        printf("Essa pessoa nao esta na lista! :(");
                    }  
                }
                
                break;
            
            case 0:

                helena = user;
                break;
            
            default:
                break;
        }
    }
}
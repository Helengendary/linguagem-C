#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    char endereco[100];
    int telefone;
} Pessoa;


int main() {
    Pessoa pessoa[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nNome: ");
        scanf("%s", pessoa[i].nome);
        
        printf("Endereco: ");
        scanf("%s", pessoa[i].endereco);
        
        printf("Telefone: ");
        scanf("%d", &pessoa[i].telefone);
    }

    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

     for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 5; j++) {
            if (pessoa[j].nome[0] == alfabeto[i] || pessoa[j].nome[0] == (alfabeto[i] - 32)) { 
                printf("Nome: %s\n", pessoa[j].nome);
                printf("Endereco: %s\n", pessoa[j].endereco);
                printf("Telefone: %d\n", pessoa[j].telefone);
            }
        }
    }
}
    

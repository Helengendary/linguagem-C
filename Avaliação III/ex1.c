#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct 
{
    char nome[100];
    char sobrenome[90];
    int anoNascimento;
    int diaNascimento;
    int mesNascimento;

} Proprietario;

typedef struct
{
    int diaData;
    int mesData;
    int anoData;
    int hora;
    int minuto;
}Data;


typedef struct
{
    char marca[90];
    int anoVeiculo;
    char cor[90];
    char placa[8];
    char modelo[90];
    Proprietario dono;
    Data data;

} Veiculos;

int main() {
    Veiculos novoVeilculo;
    Veiculos *ptrNovo = &novoVeilculo;
    FILE * arquivo;
    int quantidadeCarros;

    arquivo = fopen("notaCarros.txt", "a");

    printf("Quantos veiculos vao ser adicionados?\n");
    scanf("%d", &quantidadeCarros);

    for (int i = 0; i < quantidadeCarros; i++)
    {
        printf("\n\n-------------------\n   NOVO CARRO\n-------------------\n\n");
        printf("Marca: \n");
        scanf("%s", (* ptrNovo).marca);
        
        printf("\nAno do veiculo: \n");
        scanf("%d", &(* ptrNovo).anoVeiculo);
        
        printf("\nCor: \n");
        scanf("%s", (* ptrNovo).cor);
        
        printf("\nPlaca: \n");
        scanf("%s", (* ptrNovo).placa);
        
        printf("\nModelo: \n");
        scanf("%s", (* ptrNovo).modelo);

        printf("\nInformacoes sobre o proprietario:\n\n");

        printf("\nPrimeiro nome: \n");
        scanf("%s", (* ptrNovo).dono.nome);
        
        printf("\nSobrenome: \n");
        scanf("%s", (* ptrNovo).dono.sobrenome);
        
        printf("\nDia de nascimento: \n");
        scanf("%d", &(* ptrNovo).dono.diaNascimento);
        
        printf("\nMes de nascimento: \n");
        scanf("%d", &(* ptrNovo).dono.mesNascimento);
        
        printf("\nAno de nascimento: \n");
        scanf("%d", &(* ptrNovo).dono.anoNascimento);
        
        printf("\nInformacoes sobre a data:\n\n");

        printf("\nDia do registro: \n");
        scanf("%d", &(* ptrNovo).data.diaData);
        
        printf("\nMes do registro: \n");
        scanf("%d", &(* ptrNovo).data.mesData);
        
        printf("\nAno do registro: \n");
        scanf("%d", &(* ptrNovo).data.anoData);
        
        printf("\nHora: \n");
        scanf("%d", &(* ptrNovo).data.hora);
        
        printf("\nMinuto: \n");
        scanf("%d", &(* ptrNovo).data.minuto);
    
        int idade = 2024 - ptrNovo->dono.anoNascimento;

        fprintf(arquivo, "\n\n-------------------\n   NOTA FISCAL\n-------------------\n\nData: %d/%d/%d  %d:%d\nNome do proprietario: %s %s\nIdade do proprietario: %d \nPlaca do carro: %s\nMarca: %s\nModelo: %s\nCor: %s\nAno: %d",  ptrNovo->data.diaData,  ptrNovo->data.mesData,  ptrNovo->data.anoData,  ptrNovo->data.hora,  ptrNovo->data.minuto, ptrNovo->dono.nome,  ptrNovo->dono.sobrenome, idade,  ptrNovo->placa,  ptrNovo->marca, ptrNovo->modelo,  ptrNovo->cor,  ptrNovo->anoVeiculo);
    }

    printf("Nota fiscal impresa!\n(OBS: nota sai na pasta output)\n");

    fclose(arquivo);
}
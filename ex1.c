#include <stdio.h>

typedef struct
{
    int Matricula;
    char Nome[20];
    int Codigo_disciplina;
    float Nota1;
    float Nota2;
} Alunos;

int main() {
    Alunos alunos[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nAluno %d: ", i+1);

        printf("\nNome: ");
        scanf("%s", alunos[i].Nome);
        
        printf("\nMatricula: ");
        scanf("%d", &alunos[i].Matricula);
        
        printf("\nCodigo da disciplina: ");
        scanf("%d", &alunos[i].Codigo_disciplina);
        
        printf("\nNota prova 1: ");
        scanf("%f", &alunos[i].Nota1);
        
        printf("\nNota prova 2: ");
        scanf("%f", &alunos[i].Nota2);
    }

    float medias[10];

    for (int i = 0; i < 10; i++)
    {
        medias[i] = ((1*alunos[i].Nota1)+(2*alunos[i].Nota2))/(alunos[i].Nota1+alunos[i].Nota2); 
    
        printf("\nAluno: %s\nMedia: %.1f", alunos[i].Nome, medias[i]);
    }
      
}
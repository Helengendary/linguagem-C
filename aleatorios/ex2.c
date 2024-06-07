#include <stdio.h>

typedef struct
{
    char nome[30];
    int idade;
    char sexo[2];
    char cpf[12];
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
    int setor;
    char cargo[30];
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario;

    printf("Nome: ");
    scanf("%s", funcionario.nome);

    printf("Idade: ");
    scanf("%d", &funcionario.idade);
    
    printf("Genero: ");
    scanf("%s", funcionario.sexo);
    
    printf("CPF: ");
    scanf("%s", funcionario.cpf);

    printf("Dia de Nascimento: ");
    scanf("%d", &funcionario.dia_nascimento);

    printf("Mes de Nascimento: ");
    scanf("%d", &funcionario.mes_nascimento);

    printf("Ano de Nascimento: ");
    scanf("%d", &funcionario.ano_nascimento);

    printf("Codigo do setor: ");
    scanf("%d", &funcionario.setor);

    printf("Cargo: ");
    scanf("%s", funcionario.cargo);
    
    printf("Salario: ");
    scanf("%f", &funcionario.salario);

    printf("\n\nNome: %s\nIdade: %d\nGenero: %s\nCPF: %s\nData de nascimento: %d/%d/%d\nCodigo do setor: %d\nCargo: %s\nSalario: %.2f", funcionario.nome, funcionario.idade, funcionario.sexo, funcionario.cpf, funcionario.dia_nascimento, funcionario.mes_nascimento, funcionario.ano_nascimento, funcionario.setor, funcionario.cargo, funcionario.salario);
}
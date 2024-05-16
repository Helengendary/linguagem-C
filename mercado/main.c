#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

srand(time(NULL));
int quantidadePessoas = 0;
int *array;
array = malloc(10 * sizeof(int));
int prop = 5;

int Horas() {
    struct tm *data_hora_atual; 
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);
    return data_hora_atual->tm_hour;
}

void probabilidade() {
    int ale = rand() % (5*2); 
    printf("%d\n", ale);
    if (ale < prop)
    {
        array[quantidadePessoas] = 1;
        quantidadePessoas++;
    }
    printf("\n\n%d", quantidadePessoas);
}

int main(void)
{

}

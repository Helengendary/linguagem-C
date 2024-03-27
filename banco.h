#include <stdio.h>

#ifndef BANCO_H
#define BANCO_H

    void sacar(float saque, float saldo) {
        FILE *arquivo;
        arquivo = fopen("../banco.txt", "a");
        if (saque < saldo) {
            saldo -= saque;
            printf("\nSaldo: %f", saldo);
            fprintf(arquivo, "\n- R$%f", saque);
            fprintf(arquivo, "\nSaldo R$%f", saldo);
        } else
        {
            printf("\nSaldo insuficiente");
        }
        fclose(arquivo);
    }

    void depositar(int dep, float saldo) {
        saldo += dep;
        printf("Saldo: %f", saldo);
    }

#endif

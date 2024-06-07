#include <stdio.h>

int main(){
    int setor, frios, padaria, bebidas, mercearia, acougue;
    float sacola;
    system("color 85");

    printf("Vamos as compras ╰(*°▽°*)╯");
    printf("-------Menu-------\n");
    printf("|1 -> Frios      |\n");
    printf("|2 -> Padaria    |\n");
    printf("|3 -> Bebidas    |\n");
    printf("|4 -> Mercearia  |\n");
    printf("|5 -> Açougue    |\n");
    printf("|6 -> Limpeza    |\n");
    printf("------------------\n");
    scanf("%d", &setor);
    
    switch (setor)
    {
    case 1:
        printf("-------------Frios--------------\n");
        printf("|1 -> Queijo............R$25,06|\n");
        printf("|2 -> Iogurte...........R$11,89|\n");
        printf("|3 -> Mortadela.........R$12,32|\n");
        printf("|4 -> Lasanhas Cong.....R$23,78|\n");
        printf("|5 -> Pizzas Cong.......R$15,99|\n");
        printf("|6 -> Batata Pré-Frita..R$27,50|\n");
        printf("--------------------------------\n");
        scanf("%d", frios);
        switch (frios)
        {
        case 1:
            sacola += 25.06;
            printf("Sacola: R$%.2f", sacola);
            break;
        case 2:
            sacola += 11.89;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 3:
            sacola += 12.32;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 4:
            sacola += 23.78;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 5:
            sacola += 15.99;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 6:
            sacola += 27.5;
            printf("Sacola: R$%.2f", sacola);
            break;
        default:
            break;
        }
        break;
    
    case 2:
        printf("------------Padaria-------------\n");
        printf("|1 -> 10 Pães............R$6,40|\n");
        printf("|2 -> Salgados...........R$7,50|\n");
        printf("|3 -> Pdc de Bolo.......R$12,50|\n");
        printf("|4 -> Doces.............R$15,00|\n");
        printf("|5 -> Salgado Gourmet...R$12,90|\n");
        printf("--------------------------------\n");
        scanf("%d", padaria);
        switch (padaria)
        {
        case 1:
            sacola += 6.4;
            printf("Sacola: R$%.2f", sacola);
            break;
        case 2:
            sacola += 7.5;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 3:
            sacola += 12.5;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 4:
            sacola += 15;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 5:
            sacola += 12.9;
            printf("Sacola: R$%.2f", sacola);
            break;
        default:
            break;
        }
        break;
    
    case 3:
        printf("-----------Bebidas-----------\n");
        printf("|1 -> Água s/Gás......R$0,99|\n");
        printf("|2 -> Água c/Gás......R$1,50|\n");
        printf("|3 -> Refrigerante...R$12,50|\n");
        printf("|4 -> Energéticos.....R$9,50|\n");
        printf("|5 -> Sucos..........R$10,90|\n");
        printf("|6 -> Leite..........R$12,90|\n");
        printf("-----------------------------\n");
        scanf("%d", bebidas);
        switch (bebidas)
        {
        case 1:
            sacola += 0.99;
            printf("Sacola: R$%.2f", sacola);
            break;
        case 2:
            sacola += 1.5;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 3:
            sacola += 12.5;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 4:
            sacola += 9.5;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 5:
            sacola += 10.9;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 6:
            sacola += 12.9;
            printf("Sacola: R$%.2f", sacola);
            break;
        default:
            break;
        }
        break;
    
    case 4:
        printf("---------Mercearia---------\n");
        printf("|1 -> Arroz.........R$9,29|\n");
        printf("|2 -> Feijão........R$8,99|\n");
        printf("|3 -> Trigo.........R$2,99|\n");
        printf("|4 -> Macarrão......R$6,59|\n");
        printf("|5 -> Óleo.........R$12,29|\n");
        printf("|6 -> Temperos.....R$10,90|\n");
        printf("|7 -> Sal...........R$6,19|\n");
        printf("|8 -> Áçucar........R$3,98|\n");
        printf("---------------------------\n");
        scanf("%d", mercearia);
        switch (mercearia)
        {
        case 1:
            sacola += 9.29;
            printf("Sacola: R$%.2f", sacola);
            break;
        case 2:
            sacola += 8.99;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 3:
            sacola += 2.99;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 4:
            sacola += 6.59;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 5:
            sacola += 12.29;
            printf("Sacola: R$%.2f", sacola);
            break;
        
        case 6:
            sacola += 10.9;
            printf("Sacola: R$%.2f", sacola);
            break;
        
        case 7:
            sacola += 6.19;
            printf("Sacola: R$%.2f", sacola);
            break;
        case 8:
            sacola += 3.98;
            printf("Sacola: R$%.2f", sacola);
            break;
        default:
            break;
        }
        break;
    
    
    case 5:
        printf("------------Açougue----------\n");
        printf("|1 -> Sassami........R$15,99|\n");
        printf("|2 -> Fígado.........R$21,90|\n");
        printf("|3 -> Carne Moída....R$14,69|\n");
        printf("|4 -> Linguiça.......R$22,90|\n");
        printf("|5 -> Bisteca........R$14,29|\n");
        printf("|6 -> Frango..........R$8,67|\n");
        printf("|7 -> Alcatra........R$31,70|\n");
        printf("-----------------------------\n");
        scanf("%d", acougue);
        switch (acougue)
        {
        case 1:
            sacola += 15.99;
            printf("Sacola: R$%.2f", sacola);
            break;
        case 2:
            sacola += 21.9;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 3:
            sacola += 14.69;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 4:
            sacola += 22.9;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 5:
            sacola += 14.29;
            printf("Sacola: R$%.2f", sacola);
            break;
        
        case 6:
            sacola += 8.67;
            printf("Sacola: R$%.2f", sacola);
            break;
        
        case 7:
            sacola += 31.7;
            printf("Sacola: R$%.2f", sacola);
            break;
        default:
            break;
        }
        break;
    case 6:
        printf("-------------Limpeza------------\n");
        printf("|1 -> Kit bucal.........R$56,63|\n");
        printf("|2 -> Amaciante.........R$29,90|\n");
        printf("|3 -> Sabão de Roupas...R$26,69|\n");
        printf("|4 -> Detergente.........R$2,39|\n");
        printf("|5 -> Veja..............R$11,59|\n");
        printf("|6 -> Qboa...............R$6,99|\n");
        printf("|7 -> Toalha de Papel....R$8.89|\n");
        printf("|8 -> Papel Higiênico...R$14,49|\n");
        printf("--------------------------------\n");
        scanf("%d", acougue);
        switch (acougue)
        {
        case 1:
            sacola += 56.63;
            printf("Sacola: R$%.2f", sacola);
            break;
        case 2:
            sacola += 29.9;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 3:
            sacola += 26.69;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 4:
            sacola += 2.39;
            printf("Sacola: R$%.2f", sacola);
            break;

        case 5:
            sacola += 11.59;
            printf("Sacola: R$%.2f", sacola);
            break;
        
        case 6:
            sacola += 6.99;
            printf("Sacola: R$%.2f", sacola);
            break;
        
        case 7:
            sacola += 8.89;
            printf("Sacola: R$%.2f", sacola);
            break;
        
        case 8:
            sacola += 14.49;
            printf("Sacola: R$%.2f", sacola);
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}

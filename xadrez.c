#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int T = 1, B = 1;

    printf("TORRE: \n");
    while (T <= 5) // torre
    {
        printf("direita\n");
        T++;
    }

    printf("\nBISPO: \n");
    do // bispo
    {
        printf("cima, direita\n");    
        B++;
    } while (B <= 5);

    printf("\nRAINHA: \n");
    for (int R = 1; R <= 8; R++) // rainha
    {
        printf("esquerda\n");
    }

    printf("\nCAVALO: \n");
    for (int C = 1; C <= 3; C++) //cavalo
    {
        printf("baixo\n");

        while (C == 2)
        {
            printf("esquerda\n");
            C++;
        }
                
    }
    return 0;
}

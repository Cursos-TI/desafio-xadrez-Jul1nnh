#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int T = 1, B = 1;

    while (T <= 5) // torre
    {
        printf("direita\n");
        T++;
    }

    do // bispo
    {
        printf("\ncima, direita\n");    
        B++;
    } while (B <= 5);
    
    for (int R = 1; R <= 8; R++) // rainha
    {
        printf("\nesquerda");
    }
    return 0;
}

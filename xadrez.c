#include <stdio.h>

void bispo(int n) {
    if (n == 0) return; 

    // Loop externo
    for (int i = 0; i < 1; i++) {
        printf("cima, ");

        // Loop interno 
        for (int j = 0; j < 1; j++) {
            printf("direita\n");
        }
    }

    bispo(n - 1); 
}

void torre(int n) {
    if (n > 0) {
        printf("direita\n");
        torre(n - 1);
    } 
}

void rainha(int n) {
    if (n > 0) {
        printf("esquerda\n");
        rainha(n - 1); 
    }
}

void cavalo() {
    
    // Loop externo
    for (int i = 0; i < 2; i++) { 
        printf("cima\n"); 
        
        // Loop interno
        for (int j = 0; j < 1; j++) {
            if (i == 1 && j == 0) { 
                printf("direita\n"); 
            }
        }
    }
}

int main() {
    int numeroBispo = 5;
    int numeroTorre = 5;
    int numeroRainha = 8;

    printf("\nBISPO: \n");
    bispo(numeroBispo);

    printf("\nTORRE: \n");
    torre(numeroTorre);

    printf("\nRAINHA: \n");
    rainha(numeroRainha);

    printf("\nCAVALO: \n");
    cavalo();


    return 0;
   
}

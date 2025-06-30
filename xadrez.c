#include <stdio.h>
#include "src/tabuleiro.h"
int main(){
    int torre, rainha, bispo, cavalo;

    // torre
    printf("====== Movimento da Torre ======\n");{
        printf("Quantas casas? ");
        scanf("%d", &torre);
        passoTorre(torre);

    }

    printf("\n");
    
    // rainha
    printf("====== Movimento da rainha ======\n");{

        printf("Quantas casas? ");
        scanf("%d", &rainha);
        passoRainha(rainha);
    }

    printf("\n");

    // bispo
    printf("====== Movimento do bispo - Diagonal ======\n");{

        printf("Quantas casas? ");
        scanf("%d", &bispo);
        passoBispo(bispo, bispo);
    }

    printf("\n");

    // cavalo
    printf("====== Movimento do cavalo - em'L' ======\n");{
        int escolha;

        printf("Escolha a direção:\n");
        printf("1 - cima-direita\n2 - cima-esquerda\n3 - baixo-direita\n4 - baixo-esquerda\n");
        printf("5 - direita-cima\n6 - direita-baixo\n7 - esquerda-cima\n8 - esquerda-baixo\n");
        printf("\nDigite o número da direção desejada: ");
        scanf("\n%d", &escolha);

        passoCavalo(escolha);
    }

    printf("\n");

    return 0;
}
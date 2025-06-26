#include <stdio.h>
int main(){
    // usando a estrutura for, while e do-while para mover as peças de xadrez (torre, bispo, rainha)

    // torre
    printf("Movimento da Torre, 5 casas à direita:\n");
    for (int torre = 1; 
        torre<= 5; 
        torre++){
        printf("%dª casa à *direita*\n", torre);
    }

    printf("\n");

    // bispo
    printf("Movimento do bispo, 5 casas na diagonal (Cima, Direita):\n");{

        int bispo = 1;
        while (bispo <= 5){
            printf("%dª casa na *diagonal*\n", bispo);
            bispo++;
        }
    }

    printf("\n");

    // rainha
    printf("Movimento da rainha, 8 casas à esquerda:\n");{

        int rainha = 1;
        do{
            printf("%dª casa à *esquerda*\n", rainha);
            rainha++;
        }while(rainha <= 8);
    }
    
    return 0;
}
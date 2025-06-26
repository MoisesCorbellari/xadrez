#include <stdio.h>
int main(){
    // usando a estrutura for, while e do-while para mover as peças de xadrez (torre, bispo, rainha)
    int t, b = 1, r = 1;
    
    // torre
    printf("Movimento da Torre, 5 casas à direita:\n");
    for (t = 1; t<= 5; t++){
        printf("%dª casa à *direita*\n", t);
    }

    printf("\n");

    // bispo
    printf("Movimento do bispo, 5 casas na diagonal (Cima, Direita):\n");
    while (b <= 5){
        printf("%dª casa na *diagonal*\n", b);
        b++;
    }

    printf("\n");

    // rainha
    printf("Movimento da rainha, 8 casas à esquerda:\n");
    do{
        printf("%dª casa à *esquerda*\n", r);
        r++;
    }while(r <= 8);
    
    return 0;
}
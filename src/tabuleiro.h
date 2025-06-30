#include <stdio.h>

void passoTorre(int casa){
    if(casa > 0){
        printf("%dª casa: Direita\n", casa);
        passoTorre(casa - 1);
    }
}

void passoRainha(int casa){
    if(casa == 0) return;

    printf("%dª casa: Esquerda\n", casa);
    passoRainha(casa - 1);
    
}

void passoBispo(int linhas, int colunas){
    if(linhas == 0 || colunas == 0) return;

    printf("%dª casa: Cima - Direita (Diagonal)\n", linhas);
    passoBispo(linhas - 1, colunas - 1);
}

void passoCavalo(int escolha) {
    for (int i = 1; i <= 1; i++) {
        printf("\nOpção %d: ", escolha);
        switch (escolha) {
            case 1:
                printf("2 para cima, 1 para direita\n");
                break;
            case 2:
                printf("2 para cima, 1 para esquerda\n");
                break;
            case 3:
                printf("2 para baixo, 1 para direita\n");
                break;
            case 4:
                printf("2 para baixo, 1 para esquerda\n");
                break;
            case 5:
                printf("1 para cima, 2 para direita\n");
                break;
            case 6:
                printf("1 para baixo, 2 para direita\n");
                break;
            case 7:
                printf("1 para cima, 2 para esquerda\n");
                break;
            case 8:
                printf("1 para baixo, 2 para esquerda\n");
                break;
            default:
                printf("Opção inválida!\n");
                return; // Sai da função se inválido
        }
    }
}
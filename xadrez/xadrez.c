#include <stdio.h>

// Funções recursivas para o Nível Mestre
void moverBispo(int passos) {
    if(passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if(passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if(passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função principal
int main() {
    int opcao;
    const int bispoPassos = 5;
    const int torrePassos = 5;
    const int rainhaPassos = 8;

    printf("Desafio Xadrez - MateCheck\n");
    printf("Escolha o nível:\n1 - Novato\n2 - Aventureiro\n3 - Mestre\n");
    scanf("%d", &opcao);

    if(opcao == 1) {
        // Nível Novato
        int i;
        printf("\n--- Nível Novato ---\n");
        printf("Movimentação do Bispo (diagonal superior direita):\n");
        for(i = 0; i < bispoPassos; i++) {
            printf("Cima\n");
            printf("Direita\n");
        }

        printf("\nMovimentação da Torre (direita):\n");
        for(i = 0; i < torrePassos; i++) {
            printf("Direita\n");
        }

        printf("\nMovimentação da Rainha (esquerda):\n");
        for(i = 0; i < rainhaPassos; i++) {
            printf("Esquerda\n");
        }
    }
    else if(opcao == 2) {
        // Nível Aventureiro
        int i, j;
        printf("\n--- Nível Aventureiro ---\n");
        printf("Movimentação do Cavalo (em L para baixo e esquerda):\n");
        for(i = 0; i < 1; i++) { // 1 movimento
            j = 0;
            while(j < 2) { // perna longa
                printf("Baixo\n");
                j++;
            }
            j = 0;
            do { // perna curta
                printf("Esquerda\n");
                j++;
            } while(j < 1);
        }
    }
    else if(opcao == 3) {
        // Nível Mestre
        printf("\n--- Nível Mestre ---\n");
        printf("Movimentação do Bispo (recursiva, diagonal superior direita):\n");
        moverBispo(bispoPassos);

        printf("\nMovimentação da Torre (recursiva, direita):\n");
        moverTorre(torrePassos);

        printf("\nMovimentação da Rainha (recursiva, esquerda):\n");
        moverRainha(rainhaPassos);

        printf("\nMovimentação do Cavalo (1 vez em L para cima e direita):\n");
        int i, j;
        for(i = 0; i < 1; i++) { // loop do movimento único
            for(j = 0; j < 2; j++) { // perna longa
                printf("Cima\n");
            }
            for(j = 0; j < 1; j++) { // perna curta
                printf("Direita\n");
            }
        }
    }
    else {
        printf("Opção inválida.\n");
    }

    return 0;
}

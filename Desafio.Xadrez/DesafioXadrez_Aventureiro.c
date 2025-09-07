// Programa Aventureiro: Simulação de movimentos de peças de xadrez

#include <stdio.h>

/* 
    Este programa simula os movimentos de três peças de xadrez:
    - Rainha andando para a esquerda 8 vezes
    - Bispo andando na diagonal (cima e direita) 5 vezes
    - Torre movendo-se para a direita 5 vezes
    - Cavalo movimento em L (baixo, baixo e esquerda) 1 vez
*/

int main() {

    // Movimento da Rainha
    int i = 1;
    printf("Rainha irá andar para esquerda 8 vezes\n");

    do {
        printf("Esquerda\n");  // Simula um passo da Rainha para a esquerda
        i++;
    } while (i <= 8);  // Executa 8 vezes

    // Movimento do Bispo
    printf("Bispo irá andar 5 vezes na Diagonal\n");

    for (int j = 1; j <= 5; j++) {
        printf("Cima, Direita\n");  // Simula um movimento diagonal (cima + direita)
    }

    // Movimento da Torre
    printf("Torre irá se mover para Direita 5 vezes\n");

    int k = 1;
    while (k <= 5) {
        printf("Direita\n");  // Simula um passo da Torre para a direita
        k++;
    }


    // Movimento do Cavalo

    printf("O Cavalo vai se mover em L 2 vezes para baixo e 1 vez para esquerda\n");

    int l, m;
    for(l = 1; l <= 1; ++l) 
    {
        for(m = l; m <= 2; m++)
        {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
    }


    return 0;
}

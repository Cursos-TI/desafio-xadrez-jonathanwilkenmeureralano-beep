// Programa Novato: Simulação de movimentos de peças de xadrez

#include <stdio.h>

/*
    Este programa simula os movimentos de três peças de xadrez:
    - Rainha andando para a esquerda 8 vezes
    - Bispo andando na diagonal (cima e direita) 5 vezes
    - Torre movendo-se para a direita 5 vezes
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

    for (int a = 1; a <= 5; a++) {
        printf("Cima, Direita\n");  // Simula um movimento diagonal (cima + direita)
    }

    // Movimento da Torre
    printf("Torre irá se mover para Direita 5 vezes\n");

    int b = 1;
    while (b <= 5) {
        printf("Direita\n");  // Simula um passo da Torre para a direita
        b++;
    }

    return 0;
}

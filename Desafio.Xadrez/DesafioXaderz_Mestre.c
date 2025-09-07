// Programa Mestre: Simulação de movimentos de peças de xadrez

#include <stdio.h>


// TORRE – Anda para a Direita

void moverTorre(int casas) {
    if (casas <= 0) return;

    printf("Direita\n");
    casas--;                // Decrementa antes de chamar recursivamente
    moverTorre(casas);
}


// RAINHA – Anda para a Esquerda

void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Esquerda\n");
    casas--;
    moverRainha(casas);
}


// BISPO – Anda na Diagonal (Cima, Direita)

void moverBispo(int casas) {
    if (casas <= 0) return;

    printf("Cima, Direita\n");
    casas--;
    moverBispo(casas);
}


// CAVALO – Movimento em "L" (2 Cima + 1 Direita)

void moverCavalo(int movimento) {
    if (movimento <= 0) return;

    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n\n");

    movimento--;
    moverCavalo(movimento);
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;
    int movimentoCavalo = 1;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentoCavalo);

    return 0;
}


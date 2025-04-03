#include <stdio.h>

void moverTorre() {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
}

void moverBispo() {
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
}

void moverRainha() {
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
}

int main() {
    moverTorre();
    moverBispo();
    moverRainha();
    return 0;
}

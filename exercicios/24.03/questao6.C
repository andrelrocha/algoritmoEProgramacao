//Elaborar um algoritmo que apresente o valor do volume de uma caixa retangular, utilizando a formula Volume = Comprimento * Largura * Altura.

#include <stdio.h>

int main () {
    float comprimento, largura, altura;
    printf("Digite a altura: ");
    scanf(" %f", &altura);

    printf("Digite a largura: ");
    scanf(" %f", &largura);

    printf("Digite o comprimento: ");
    scanf(" %f", &comprimento);

    float volume = comprimento*largura*altura;

    printf("O volume total do retangulo de altura %.2f, largura %.2f e comprimento %.2f e: %.2f", altura, largura, comprimento, volume);
}
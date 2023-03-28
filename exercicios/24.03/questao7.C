//Elaborar um algoritmo que apresente o valor da conversao em Real de um valor lido em Dolar. O
//algoritmo deve receber o valor da cotacao do dolar no dia.

#include <stdio.h>

int main () {
    double valorReal = 0;
    printf("Digite o valor em reais: ");
    scanf(" %lf", &valorReal);

    double valorDolar = 5.20;
    
    double valorFinal = valorReal*valorDolar;

    printf("Para R$ %.2lf, voce tera $ %.2lf", valorReal, valorFinal);
}
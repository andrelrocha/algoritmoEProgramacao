//questao 9
//Escreva um algoritmo que leia tres valores inteiros diferentes e:
//(a) Imprima o menor entre eles;
//(b) Imprima o maior numero entre eles.

#include <stdio.h>

int main () {
    int a, b, c;
    printf("digite o primeiro numero: ");
    scanf("%d", &a);
    printf("digite o segundo numero: ");
    scanf("%d", &b);
    printf("digite o terceiro numero: ");
    scanf("%d", &c);

    int menor = a, maior = a;

    if (b < menor) {
        menor = b;
    } else if (b > maior) {
        maior = b;
    }

    if (c < menor) {
        menor = c;
    } else if (c > maior) {
        maior = c;
    }

    printf("O menor numero e: %d\n", menor);
    printf("O maior numero e: %d\n", maior);

}
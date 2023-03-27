#include <stdio.h>

int main () {
    int fatorial;

    printf("Digite o numero a ser fatorado: \n");
    scanf(" %d", &fatorial);

    int valorFator = fatorial;

    int produto = 1;

    do {
        printf("%d x %d = %d \n", produto, valorFator, produto*valorFator);
        produto  *= valorFator;
        valorFator--;
    } while (valorFator > 1);

    printf("O fatorial de %d e' %d", fatorial, produto);

}
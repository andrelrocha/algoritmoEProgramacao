//Escreva um algoritmo que receba os coeficientes de uma equacao de segundo grau (a, b e c) e:
//• Se delta for maior que zero: imprima duas raizes;
//• Se delta for igual a zero: imprima apenas a unica raiz existente;
//• Se delta menor que zero: imprima a mensagem "Nao Existem Raizes Reais".

#include <stdio.h>
#include <math.h>

int main () {
    int a, b , c = 0;

    printf("sejam a, b e c pertecentes aos Inteiros e coeficientes de uma equacao de segundo grau, ");
    printf("escreva o coeficiente a:\n");
    scanf(" %d", &a);
    printf("escreva o coeficiente b:\n");
    scanf(" %d", &b);
    printf("escreva o coeficiente c:\n");
    scanf(" %d", &c);

    int delta = (b*b) - (4 * a * c);

    if (delta > 0) {
        double resultado1 = (((-b) + sqrt(delta)) / (2 * a));
        double resultado2 = (((-b) - sqrt(delta)) / (2 * a));
        printf("as raizes da equacao sao %.2lf e %.2lf\n", resultado1, resultado2); 
    } else if (delta == 0) {
        double xVertice = (- b / (2 * a));
        printf("a raiz da equacao e %.2lf", xVertice);
    } else {
        printf("nao existem raizes reais\n");
    }
   
}
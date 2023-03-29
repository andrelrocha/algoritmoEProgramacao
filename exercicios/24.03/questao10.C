//Escreva um algoritmo que leia uma temperatura em graus Farenheit e a apresente em graus Centigrados.
//A conversao de graus Farenheit para Centigrados e obtida por C=(5/9)(F-32).

#include <stdio.h>

int main () {
    float fah = 0;
    printf("digite a temperatura em fahrenheit:\n");
    scanf(" %f", &fah);

    float celsius = (5/9.0)*(fah-32);
    printf("%.f graus fahrenheit e o mesmo que %.f C", fah, celsius);
}
//Elaborar um algoritmo que leia 3 valores a, b, c e verifique se eles formam ou nao um triangulo (supor que os valores lidos sao inteiros e positivos). Caso os valores formem um triangulo:
//(a) Calcular e escrever a area desse triangulo;
//(b) Classifica-lo como equilatero, isosceles ou escaleno.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    
    int variaveis[3];

    //recebe a, b e c
    for (int i = 0; i < 3; i ++) {
        printf("digite o lado %d: ", (i+1));
        int temporaria;
        scanf(" %d", &temporaria);
        variaveis[i] = temporaria;
    }

    //checa se forma triangulo
    int a = variaveis[0];
    int b = variaveis[1];
    int c = variaveis [2];

    if ((a + b) < c || ((b + c) < a || (a + c) < b)) {
        printf("os 3 valores nao conseguem formar triangulos.");
        exit(0);
    } else {

        if (a == b && b == c) {
            printf("Voce formou um triangulo equilatero\n");
        } else if ((a == b) || (b == c) || (a == c)) {
            printf ("voce formou um triangulo isoceles\n");
        } else printf("voce formou um triangulo escaleno\n");
    }

    float alturaTriangulo = sqrt(fabs(pow(b,2)) - (pow((a/2),2)));
    float areaTriangulo = (a * alturaTriangulo) / 2;
    printf("o triangulo formado possui area de %.2lf u.c.", areaTriangulo);
}
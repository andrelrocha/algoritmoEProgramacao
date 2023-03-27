//Elaborar um algoritmo que leia 3 valores a, b, c e verifique se eles formam ou nao um triangulo (supor que os valores lidos sao inteiros e positivos). Caso os valores formem um triangulo:
//(a) Calcular e escrever a area desse triangulo;
//(b) Classifica-lo como equilatero, isosceles ou escaleno.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main () {
    
    int variaveis[3];

    //recebe a, b e c
    for (int i = 0; i < 3; i ++) {
        printf("digite o numero %d", (i+1));
        int temporaria;
        scanf(" %d", &temporaria);
        variaveis[i] = temporaria;
    }

    //checa se forma triangulo
    int a = variaveis[1];
    int b = variaveis[2];
    int c = variaveis [3];

    if ((a + b) < c || ((b + c) < a || (a + c) < b)) {
        printf("os 3 valores nao conseguem formar triangulos.");
        exit(0);
    } else {

        if (a == b && b == c) {
            printf("Voce formou um triangulo equilatero");
        } else if ((a == b) || (b == c) || (a == c)) {
            printf ("voce formou um triangulo isoceles");
        } else printf("voce formou um triangulo escaleno");

        
    }

    
}



//area do triangulo b.h/2

//Um triângulo é chamado de equilátero se todos os lados possuem a mesma medida. Um triângulo é chamado de isósceles se dois lados possuem a mesma medida. Um triângulo é chamado de escaleno se todos os lados possuem medidas diferentes.

//área do triângulo equilátero, multiplicamos o quadrado da medida do lado pela raiz de 3 dividido por 4.
//altura = (base/2)^2 + (altura^2) = hipotenusa^2

//float num, raiz;
//printf("Digite um número: ");
//scanf("%f", &num);
//raiz = sqrt(num);
//printf("A raiz quadrada de %.2f é %.2f\n", num, raiz);
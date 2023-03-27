//Escreva um algoritmo que leia as 3 notas de um aluno e faca:
//(a) Calcule a media final deste aluno (considerar que a media e ponderada e que o peso das notas e: 2, 3 e 5, respectivamente);
//(b) Mostre uma mensagem de "Aprovado", caso a media seja igual ou superior a 7, ou a mensagemc"Reprovado", caso contrario.

#include <stdio.h>

int main()
{
    int notas[3];
    for (int i = 0; i < 3; i ++) {
        printf("digite a sua nota %d: ", (i+1));
        scanf(" %d", &notas[i]);
    }
    
    double mediaFinal = ((notas[0]*2) + (notas[1]*3) + (double)(notas[2]*5))/10.0;

    if (mediaFinal >= 7) {
        printf("parabens, voce foi aprovado com nota %.2f", mediaFinal);
    } else {
        printf("reprovado");
    }

}
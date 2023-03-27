//questao 3
//Escrever um algoritmo que leia 2 valores a e b e escreva uma das duas mensagens: "Sao multiplos"ou "Nao sao multiplos".

#include <stdio.h>
#include <stdbool.h>

int questao3 () {
int a, b;
scanf(" %d", &a);
scanf(" %d", &b);

bool divisivel = (a%b == 0);

if (divisivel) {
    printf("sao multiplos");
} else {
    printf("nao sao multiplos");
}
}
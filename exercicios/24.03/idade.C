#include <stdio.h>
#include <time.h>
#include <stdbool.h>

//Escreva um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

int diaAtual () {
    time_t data;
    time(&data);
    struct tm *data_atual;
    data_atual = localtime(&data);
    int dia = data_atual->tm_mday;
    //int dia = (*data_atual).tm_mday; (acessar elemento de uma struct)
    return dia;
}

int main () {
    int idade = 0;
    int anos = 0;
    int meses = 0;
    int dias = 0;

    printf("Quantos anos voce tem?\n");
    scanf(" %d", &anos);

    printf("Ha quantos meses voce fez aniversario?\n");
    scanf(" %d", &meses); 

    printf("Qual o dia do seu aniversário?\n");
    scanf(" %d", &dias);
}


//3 questão
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

//questao 1
//Escreva um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

#include <stdio.h>
#include <time.h>

int diaAtual () {
    time_t data;
    time(&data);
    struct tm *data_atual;
    data_atual = localtime(&data);
    int dia = data_atual->tm_mday;
    //int dia = (*data_atual).tm_mday; (acessar elemento de uma struct)
    return dia;
}

int mesAtual () {
    time_t data;
    time(&data);
    struct tm *data_atual;
    data_atual = localtime(&data);
    int mes = ((data_atual->tm_mon) +1);
    return mes;
}

int main () {
    int anos = 0;
    int meses = 0;
    int dias = 0;

    printf("Quantos anos voce tem?\n");
    scanf("%d", &anos);

    printf("Qual o mes do seu aniversario?\n");
    scanf("%d", &meses); 

    printf("Qual o dia do seu aniversario?\n");
    scanf("%d", &dias);

    int calculaMes = 0;
    int calculaDias = 0;

    if ((mesAtual() - meses) > 0) {
        calculaMes = mesAtual() - meses;
    } else {
        calculaMes = ((meses - mesAtual())%12);
    }
    
    if ((diaAtual() - dias) > 0) {
        calculaDias = diaAtual() - dias;
    } else {
        calculaDias = (dias - diaAtual())%30;
    }

    int diasAnos = (anos*365);
    int diasMeses = (calculaMes*30);
    int diaDias = calculaDias;

    int idadeDias = (diasAnos + diasMeses + diaDias);

    printf("%d", idadeDias);
}
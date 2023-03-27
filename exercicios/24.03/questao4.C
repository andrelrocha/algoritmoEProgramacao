//Tendo como dados de entrada a altura e o sexo de uma pessoa (M-Masculino ou F-Feminino), construa
//um algoritmo que calcule seu peso ideal, utilizando as seguintes formulas:
//• Para homens: (72.7*altura)-58
//• Para mulheres: (62.1*altura)-44.7

#include <stdio.h>
#include <stdbool.h>

int main() {
    double altura;
    printf("Qual sua altura em metros? (1.70, por exemplo)\n");
    scanf(" %lf", &altura); 
    
    char sexoUsuario;
    printf("Qual seu sexo? (digitar 'h' ou 'm')\n");
    scanf(" %c", &sexoUsuario);

    double pesoIdeal;
    bool invalido = false;
    if (sexoUsuario == 'h') {
        pesoIdeal = ((72.7*altura)-58);
    } else if (sexoUsuario == 'm') {
        pesoIdeal = ((62.1*altura)-44.7);
    } else {
        invalido = true;
        printf("digite um sexo valido, h ou m");
    }

    if (!invalido) {
        printf("Seu peso ideal e: %.2lf", pesoIdeal);
    }
}
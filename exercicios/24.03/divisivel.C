#include <stdio.h>
#include <stdbool.h>

int main () {
    int a, b;

    printf("Digite o primeiro numero:\n");
    scanf(" %d", &a);

    printf("Digite o segundo numero:\n");
    scanf(" %d", &b);

    bool divisivel = ((a%b) == 0);

    if (divisivel) {
        printf("%d e divisivel por %d\n", a, b);
    } else printf("%d nao e divisivel por %d\n", a, b);
}
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("%d é bissexto!\n", ano);
    } else {
        printf("%d não é bissexto.\n", ano);
    } if (ano <= 0) {
    printf("Ano inválido!\n");
    return 1;
}

    return 0;
}
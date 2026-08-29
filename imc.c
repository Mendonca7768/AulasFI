#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5)
        printf("Classificação: abaixo do peso\n");
    else if (imc < 25.0)
        printf("Classificação: peso normal\n");
    else if (imc < 30.0)
        printf("Classificação: sobrepeso\n");
    else
        printf("Classificação: obesidade\n");

    return 0;
}

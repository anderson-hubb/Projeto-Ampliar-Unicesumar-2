/*
    Escreva um programa que leia o peso e altura de um atleta.
    O programa informar como sa�da o IMC do atleta.
    F�rmula:   IMC = peso / altura�
    Obs.: Peso precisa ser em Kilograma e Altura dever� ser em metros.
*/

#include <stdio.h>

int main() {

    float altura, peso, imc;

    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("Seu imc e: %.2f", imc);

    return 0;
}
/*
    Escreva um programa que receba a m�dia de um aluno e
    informe se ele est� aprovado (>=6) ou reprovado
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float media;

    printf("Informe a m�dia: ");
    scanf("%f", &media);

    if (media >= 6) {
        printf("Aluno aprovado");
    }
    else {
        printf("Aluno reprovado");
    }

    return 0;
}
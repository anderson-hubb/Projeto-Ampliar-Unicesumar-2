/*
    Escreva um programa que calcule a �rea de um quadrado.
    F�rmula: lado�
*/

#include <stdio.h>

int main() {

    float lado;

    printf("Informe a medida do lado: ");
    scanf("%f", &lado);

    float area = lado*lado;

    printf("Area = %.2f", area);

    return 0;
}
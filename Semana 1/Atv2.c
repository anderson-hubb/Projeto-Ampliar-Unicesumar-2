/*
    Escreva um algoritmo que leia duas notas de matem�tica de um aluno.
    Ent�o, escreva na tela a m�dia dele.
*/

#include <stdio.h>

int main() {

    float nota1;
    float nota2, media;
    
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    printf("A media e: %.2f", media);

    return 0;
}
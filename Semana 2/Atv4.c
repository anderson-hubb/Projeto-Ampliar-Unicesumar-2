/*
    Escreva um programa que fa�a uma conta b�sica.
    O usu�rio dever� escolher o tipo de opera��o, sendo:

    1. Soma
    2. Subtra��o
    3. Multiplaca��o
    4. Divis�o
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opc, erro = 0;
    float numero1, numero2, resultado;

    printf("Esolha uma opera��o: \n");
    printf("1. Soma\n2. Subtra��o\n3. Multiplaca��o\n4. Divis�o\n");
    scanf("%d", &opc);

    if (opc > 0 && opc < 5) {
        printf("Primeiro numero: ");
        scanf("%f", &numero1);
        
        printf("Segundo numero: ");
        scanf("%f", &numero2);
    }    

    switch(opc) {
        case 1:
            resultado = numero1 + numero2;
            break;
        case 2:
            resultado = numero1 - numero2;
            break;
        case 3:
            resultado = numero1 * numero2;
            break;
        case 4:
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                printf("N�o � poss�vel fazer divis�o por zero.\n");
                return 1;
            }
            break;            
        default:
            printf("Op��o inv�lida");
            return 1;
            break;
    }

    printf("Resultado = %.2f", resultado);

    return 0;
}
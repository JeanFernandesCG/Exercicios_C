/* 8. O restaurante a quilo Bem-B�o cobra R$12.00 por cada quilo de refei��o. Escreva um
programa que leia o peso da refei��o montada pelo cliente (em quilos) e imprima o
valor a pagar. Assuma que na entrada informada pelo usu�rio j� foi descontado o peso
do prato. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoA, vlrPago;

    printf("Peso do Prato de comida: ");
    scanf("%f", &pesoA);

    vlrPago = pesoA*12;

    printf("\nO valor a ser pago referente ao prato de %.2f kilos, fica : %.2f Reais .\n", pesoA, vlrPago);




    return 0;
}

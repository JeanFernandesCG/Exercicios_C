/* 8. O restaurante a quilo Bem-Bão cobra R$12.00 por cada quilo de refeição. Escreva um
programa que leia o peso da refeição montada pelo cliente (em quilos) e imprima o
valor a pagar. Assuma que na entrada informada pelo usuário já foi descontado o peso
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

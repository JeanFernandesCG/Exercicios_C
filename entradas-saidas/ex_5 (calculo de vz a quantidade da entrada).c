/* 5. Faça um programa para calcular quantas ferraduras são necessárias para equipar
todos os cavalos comprados para um haras. */

#include <stdio.h>


int main()
{

    int c, TF;

    printf("5. Faca um programa para calcular quantas ferraduras \nsao necessarias para equipar todos os cavalos comprados para um haras");
    printf("\n---------------------------------------------------------------------\n");
    printf("\nQuantos Cavalos Comprados para o Haras: ");
    scanf("%d", &c);

    TF = c*4;

    printf("\nsao necessarias %d ferraduras para equipar toda tropa ! \n", TF);

    return 0;
}

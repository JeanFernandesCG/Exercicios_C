/* 7. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um programa
para ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele
conseguiu colocar no tanque. */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float x, preco, qtdtanque;

    printf("7. Um motorista deseja colocar no seu tanque X reais de gasolina.\nEscreva um programa\
para ler o preco do litro da gasolina\ne o valor do pagamento,\ne exibir quantos litros ele\
conseguiu colocar no tanque.\n");
    system("pause");
    system("cls");

    printf("Insira o valor do LITROS da gasolina: ");
    scanf("%f", &preco);

    printf("Insira quantos REAIS de gasolina gostaria: ");
    scanf("%f", &x);

    qtdtanque = x/preco;

    printf("\nForam solicitados %.2f reais de Gasolina, com o valor de %.2f reais, no fim foram comprados %.2f litros de gasolina.\n", x, preco, qtdtanque);




    return 0;
}

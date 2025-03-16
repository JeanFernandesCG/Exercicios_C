//2. Faça um programa que receba dois números inteiros do usuário e depois mostre o resultado da soma deles.



#include <stdio.h>

int main()
{
    int a, b, soma;

    printf("2. Faca um programa que receba dois numeros inteiros do usuario e depois mostre o resultado da soma deles.");
    printf("\n-----------------------------------------------------------------------------------------------------------\n");

    printf("insira 1 valor: ");
    scanf("%d", &a);
    printf("insira 1 valor: ");
    scanf("%d", &b);

    soma = a+b;

    printf("a soma dos valores eh: %d\n", soma);

    return 0;
}

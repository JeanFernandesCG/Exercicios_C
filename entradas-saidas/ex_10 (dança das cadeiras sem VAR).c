/* 10. Escreva um programa que armazene o valor 10 em uma variável A e o valor 20 em
uma variável B. A seguir (utilizando apenas atribuições entre variáveis) troque os seus
conteúdos fazendo com que o valor que está em A passe para B e vice-versa. Ao final,
escrever os valores que ficaram armazenados nas variáveis. Observação: NÃO pode
usar uma variável temporária para auxiliar na troca. Dica: use operações aritméticas. */


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int A=10,
        B=20;

    printf("A = %d \nB = %d \nPara mudar de lugar ", A, B);
    system("pause");

    B= A;
    A= B+B;

    printf("\nA = %d \nB = %d \nTCHANAAAA!!! SEM AS MAOS", A, B);


    return 0;
}

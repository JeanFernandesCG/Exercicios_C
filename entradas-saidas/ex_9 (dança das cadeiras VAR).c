/* 9. Escreva um programa que armazene o valor 10 em uma variável A e o valor 20 em
uma variável B. A seguir (utilizando apenas atribuições entre variáveis) troque os seus
conteúdos fazendo com que o valor que está em A passe para B e vice-versa. Ao final,
escrever os valores que ficaram armazenados nas variáveis. Observação: pode usar
uma variável temporária, T por exemplo, para auxiliar na troca. */


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A=10,
        B=20,
        T;

    printf("A = %d \nB = %d \nPara mudar de lugar ", A, B);
    system("pause");

    T= A;
    A= B;
    B= T;
    printf("A = %d \nB = %d \n Tchanaaaa !!", A, B);


    return 0;

}

/* 9. Escreva um programa que armazene o valor 10 em uma vari�vel A e o valor 20 em
uma vari�vel B. A seguir (utilizando apenas atribui��es entre vari�veis) troque os seus
conte�dos fazendo com que o valor que est� em A passe para B e vice-versa. Ao final,
escrever os valores que ficaram armazenados nas vari�veis. Observa��o: pode usar
uma vari�vel tempor�ria, T por exemplo, para auxiliar na troca. */


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

/* A padaria Hotp�o vende certa quantidade de p�es franceses e uma quantidade de
broas a cada dia. Cada p�ozinho custa R$ 0.55 e a broa custa R$ 1.50. Ao final do dia,
o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto
deve guardar numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado
para fazer os c�lculos para o dono. Com base nesses fatos, fa�a um programa para ler
as quantidades de p�es e de broas, e depois calcular os dados solicitados. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int  Qpao, Qbroa;

    printf("A padaria Hotpao vende certa quantidade de paes franceses e uma quantidade de broas a cada dia. \nCada paozinho custa R$ 0.55 e a broa custa R$ 1.50. \nAo final do dia,\
o dono quer saber quanto arrecadou com a venda dos paes e broas (juntos), \ne quanto\
 deve guardar numa conta de poupan�a (10%% do total arrecadado). \nVoce foi contratado\
 para fazer os calculos para o dono. \nCom base nesses fatos, faca um programa para ler\
 as quantidades de paes e de broas, \ne depois calcular os dados solicitados.\n\n");

    system("pause");
    system("cls");



    printf("insira a quantidade total vendida de paes: ");
    scanf("%d", &Qpao);

    printf("\ninsira a quantidade total vendidas de broa: ");
    scanf("%d", &Qbroa);

    float Vpao = 0.55,
          Vbroa = 1.50,
          soma,
          Tpao,
          Tbroa,
          poupanca;

    Tpao = Qpao*Vpao;
    Tbroa = Qbroa*Vbroa;
    soma = Tpao+Tbroa;

    poupanca = soma*0.10;


    printf("\nforam vendidos %d de paes (total %.2f) e %d de broas (total %.2f) e a soma dos valores foi de %.2f !", Qpao, Tpao, Qbroa, Tbroa, soma);
    printf("\n\ndeposito na popanca de 10%%: %.2f \n", poupanca);



    return 0;
}

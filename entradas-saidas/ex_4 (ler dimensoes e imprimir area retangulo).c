/*4. A imobili�ria Im�bilis vende "apenas" terrenos retangulares. Fa�a um programa para ler
as dimens�es de um terreno e depois exibir a �rea do terreno. */

#include <stdio.h>

int main()
{
    float b, h, area;

    printf("4. A imobili�ria Imobilis vende apenas terrenos retangulares. \nFaca um programa para ler as dimensoes de um terreno e depois exibir a area do terreno.");
    printf("\n-------------------------------------------------------------------------------------\n");

    printf("Insira a largura do terreno: \n");
    scanf("%f", &b);

    printf("Insira a altura do terreno: \n");
    scanf("%f", &h);

    if(b == h)
    {
        printf("!!!! N�O eh um terreno retangular !!!!");

    }

    area = b*h;

    printf("\nAltura: %.2f, Largura: %.2f, a sua Area: %.2f", h, b, area);
    return 0;


}

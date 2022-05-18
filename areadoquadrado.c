#include<stdio.h>
int main()
{
    //Define as Variaveis
    float lado1;
    float areaQuadrado;

    //Entrada dos numeros
    printf("Coloque a em cm o lado do quadrado:\n");
    scanf("%f", &lado1);

    //Saida dos numeros
    areaQuadrado = lado1 * lado1;
    printf("A area do quadrado e: %.2f", areaQuadrado);

}
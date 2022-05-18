#include<stdio.h>
int main()
{
    //Define as Variaveis
    int celsius;
    int fahrenheit;

    //Entrada dos numeros
    printf("Coloque o valor de celsius para a conversao e fahrenheit:\n");
    scanf("%d", &celsius);

    //Saida dos numeros
    fahrenheit =  celsius * (9.0 / 5.0) + 32.0;
    printf("O valor convertido para fahrenheit e: %d", fahrenheit);

}
#include<stdio.h>
int main()
{
    //Define as Variaveis
    float salario;
    float aumento;

    //Entrada dos numeros
    printf("Coloque o salario do funcionario:\n");
    scanf("%f", &salario);

    //Saida dos numeros
    aumento = (salario * 0.25) + salario;
    printf("A area do quadrado e: %.2f", aumento);

}
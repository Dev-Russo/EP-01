#include<stdio.h>
int main()
{
    float matematica, pesom, portugues, pesop, conhecimentos, pesoc, mediaponderada;

    printf("Digite a nota de Matematica do aluno:\n");
    scanf("%f", &matematica);

    printf("Digite o peso da nota de Matematica:\n");
    scanf("%f", &pesom);

    printf("Digite a nota de Portugues do aluno:\n");
    scanf("%f", &portugues);

    printf("Digite o peso da nota de Portugues:\n");
    scanf("%f", &pesop);

    printf("Digite a nota de Conhecimentos Especificos  do aluno:\n");
    scanf("%f", &conhecimentos);

    printf("Digite o peso da nota de Conhecimentos Especificos:\n");
    scanf("%f", &pesoc);


    mediaponderada = ((matematica * pesom) + (portugues * pesop) + (conhecimentos * pesoc)) / (pesoc + pesom + pesop);
    printf("A nota do Aluno foi:\n%.2f", mediaponderada);

    return 0;
}
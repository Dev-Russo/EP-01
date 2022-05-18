#include<stdio.h>
int main()
{
    float nota1, nota2, nota3, mediaAritimetica;

    printf("Digite a 1 nota do aluno:\n");
    scanf("%f", &nota1);

    printf("Digite a 2 nota do aluno:\n");
    scanf("%f", &nota2);

    printf("Digite a 3 nota do aluno:\n");
    scanf("%f", &nota3);


    mediaAritimetica = (nota1 + nota2 + nota3) / 3;
    printf("A nota do Aluno foi:\n%.2f", mediaAritimetica);

    return 0;
}
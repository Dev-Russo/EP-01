#include <stdio.h>
int main()
{
    int n1, n2, n3;
    //Nesta parte do código o usuario insere dois numeros
    printf("Digite tres numeros:");
    //Nesta parte é a hora da entrada dos numeros
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    //Aparece os numeros digitado com a linha quebrada em /n
    printf("Os numeros digitados foram:\n");
    
    printf("Primeiro numero: %d\n", n1);
    printf("Segundo numero: %d\n", n2);
    printf("Terceiro numero: %d\n", n3);

    return 0;
}

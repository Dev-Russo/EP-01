#include <stdio.h>
int main()
{
    int n1, n2;
    //Nesta parte do código o usuario insere dois numeros
    printf("Digite dois numeros:");
    //Nesta parte é a hora da entrada dos numeros
    scanf("%d", &n1);
    scanf("%d", &n2);

    //Aparece os numeros digitado com a linha quebrada em /n
    printf("Os numeros digitados foram:\n");
    printf("Primeiro numero: %d\n", n1);
    printf("Segundo numero: %d\n", n2);

    return 0;
}

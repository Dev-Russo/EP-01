#include<stdio.h>
int main()
{
    //Define as Variaveis
    int main1, main2;
    int aux1, aux2;

    //Entrada dos numeros
    printf("defina o valor de m1:\n");
    scanf("%d", &main1);
    
    printf("defina o valor de m2:\n");
    scanf("%d", &main2);

    //logica
    aux1 = main2;
    aux2 = main1;
    main1 = aux1;
    main2 = aux2;


    //Saida dos numeros
    printf("Valores invertidos \n main1 = %d, \n main2 = %d", main1, main2 );

}
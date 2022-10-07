#include <stdio.h>
#include <stdlib.h>


main()
{
    int A[5];
    int B[5];
    int soma[5];
    int soma_total;

//Fazendo a somando de A + B

    for(int i=0; i<=4; i++)
    {
        printf("\nDigite o valor de A: ");
        scanf("%d", &A[i]);
        printf("\nDigite o valor de B: ");
        scanf("%d", &B[i]);
        printf("--------------------------");
    }
//Mostrando a soma entre A + B

    for(int i = 0; i < 5; i++)
    {
        soma[i] = A[i] + B[i];
        printf("\nA soma ente %d + %d = %d",A[i], B[i], soma[i]);

    }
//Pega uma posição do vetor de 0 a 4

    printf("\nPegar uma Posição: ");
    scanf("%d", &soma[5]);

    printf("\nO resultado da posição %d é de %d", soma[5], *(soma + soma[5]));

    printf("\n\n-----------------------------------\n");

    //Pegando 2 posição e somando elas

    printf("\nPegar uma Posição: ");
    scanf("%i", &soma[5]);
    printf("%i", *(soma + soma[5]));


    printf("\nPegar outra Posição: ");
    scanf("%d", &soma[5]);
    printf("%d\n", *(soma + soma[5]));

    //somando as posições puxada pelo usuario

    soma_total = soma[5] + *(soma + soma[5]);


    printf("\n\nA Soma entre %i + %d = %d",*(soma + soma[5]), *(soma + soma[5]), soma_total);


//fica pra proxima vou fazer as atividades de ES2 (engenharia de software 2)

//dia 25/09/2022
}

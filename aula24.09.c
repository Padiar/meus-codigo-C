#include <stdio.h>
#include <stdlib.h>


//Aprendendo malloc()
//Aprendendo Alocação de momoria
//Ponteiro usa um asterisco antes da variavel
//EX: int *x;



main()
{
    //matriz é um ponteiro
    int nums[5];

    for(int i = 0; i < 5; i++)
    {
        printf("\nDigite um Valor: ");
        scanf("%d", &nums[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("\nOs Valores são: %d", nums[i]);
    }
    printf("\n\nPuxar um Valor: ");
    scanf("%d", &nums[5]);

                                                    //por isso podemos usar * na mtriz para imprimir ou puxar um valor
    printf("\nO Valor da posição %d é %d",nums[5], *(nums + nums[5]));


}

#include <stdio.h>

main()
{
    int x[5], X;

    for(int i = 0; i <=4; i++)
    {
        printf("Digite 5 Valores: ");
        scanf("%d", &x[i]);
    }
    for(int i=0; i<=4; i++)
    {
        X = x[i];
        printf("\nOs valores %i são: %d", x[i], X);
    }
}

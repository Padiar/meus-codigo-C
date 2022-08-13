#include <stdio.h>

void main()
{
    char nome[100];
    char nom[100];
    printf("Primeiro Nome: ");
    gets(nome);
    printf("Sobrenome: ");
    gets(nom);
    printf("Nome completo é: %s %s \n", nome, nom);
}
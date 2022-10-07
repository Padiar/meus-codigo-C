#include <stdio.h>
#include <stdlib.h>


struct aluno
{
  int RA;
  char nome[45], email[50], tel[15], datanacimento[12];
};

struct grad
{
    struct aluno tecnologo;
    struct aluno bacharelado;
};

struct grad g;

void cadastraTecnologo()
{
    printf("Entre com o RA: ");
    scanf("%d", &g.tecnologo.RA);
    printf("\nEntre com o Nome: ");
    scanf("%s", g.tecnologo.nome);
    printf("\nEnte com o Email: ");
    scanf("%s", g.tecnologo.email);
    printf("\nEntre com a sua data de nacimento: ");
    scanf("%s", g.tecnologo.datanacimento);
    printf("\nEntre com seu Telefone: ");
    scanf("%s", g.tecnologo.tel);
}

void exibeTecnologo()
{
    printf("\nRA: %d\n", g.tecnologo.RA);
    printf("Nome: %s\n", g.tecnologo.nome);
    printf("Email: %s\n", g.tecnologo.email);
    printf("Data de Nacimento: %s\n", g.tecnologo.datanacimento);
    printf("TELL: %s", g.tecnologo.tel);
}


int main()
{
    cadastraTecnologo();
    exibeTecnologo();
}

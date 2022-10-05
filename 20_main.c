//Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.

#include <stdio.h>

#define TAM 50
int main()
{
    char nome1[TAM], nome2[TAM];
    
    printf("digite o primeiro nome: \n");
    gets(nome1);
    printf("digite o segundo nome: \n");
    gets(nome2);
    printf("nomes em ordem alfabética: \n", 130);
    
    if (strcmp (nome1, nome2) < 0)
    {
        printf("\n%s\n%s\n", nome1, nome2);
    }
    else
    {
        printf("\n%s\n%s\n", nome2, nome1);
    }
 }

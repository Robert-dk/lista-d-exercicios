//Dados um número natural n, exiba seu fatorial n!.
#include<stdio.h>

int f, n;

int main()
{
  printf("digite o número natural n: ");
  scanf("%i", &n) ;

  for(f = 1; n > 1; n = n - 1)
  {
      f = f * n;
  }

  printf("valor fatorial é: %i", f);
  return 0;
}
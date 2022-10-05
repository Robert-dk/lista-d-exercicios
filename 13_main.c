//Dado um número positivo, crie um programa que escreva todos os números ímpares menores e/ou iguais a esse número e maiores ou igual a um. 
#include <stdio.h>

int main() {
  int num, cont;
  
  printf("digite um número inteiro positivo: ");
  scanf("%i", &num);

  printf("\nos números ímpares menores que %i são:\n", num);

  if(num%2==0)
    num=num-1;
  for(cont=num; cont>=1; cont=cont-2)
    printf("%i ", cont);
  return 0;
}
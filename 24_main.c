//Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.
#include<stdio.h>

int main() {
  int N;

  printf("digite uma quantia: \n");
  scanf("%i", &N);

  printf("\n%i nota(s) de R$100.00\n", N/100); 
  N = N%100;

  printf("%i nota(s) de R$50.00\n", N/50); 
  N = N%50;

  printf("%i nota(s) de R$20.00\n", N/20); 
  N = N%20;

  printf("%i nota(s) de R$10.00\n", N/10); 
  N = N%10;

  printf("%i nota(s) de R$5.00\n", N/5); 
  N = N%5;

  printf("%i nota(s) de R$2.00\n", N/2); 
  N = N%2;

  printf("%i nota(s) de R$1.00\n", N/1); 
  N = N%1;

return 0;
}
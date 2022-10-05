//O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo, 1²=1, 2²=1+3, 3²=1+3+5, 4²=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.
#include <stdio.h>
int main()
{
  int num,i,impar,soma;
  soma=0;
  printf("Digite o número: \n");
  scanf("%i",&num);
  i=0;
  impar=-1;
  do{
          impar=impar+2;
          soma=+impar;
          printf("%i ",impar);
          i++;}
  while (i<num);   
  return 0;
}
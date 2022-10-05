/**************************************************************
Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
maior ou igual a 9   A
maior ou igual a 7.5 e menor que 9   B
maior ou igual a 6 e menor que 7.5   C
maior ou igual a 4 e menor que 6   D
menor que 4   E
**************************************************************/
#include <stdio.h>

int main()
{

   float N1, N2, N3, ME, MA;

   printf("Digite a primeira nota: ");
   scanf("%f", &N1);

   printf("Digite a segunda nota: ");
   scanf("%f", &N2);

   printf("Digite a terceira nota: ");
   scanf("%f", &N3);

   printf("Digite a média dos exercícios: ");
   scanf("%f", &ME);

   MA = (N1 + N2*2 + N3*3 + ME)/7.0;

   if(MA>=9)
   {
       printf("A");
   }
   else if(MA>=7.5)
   {
       printf("B");
   }
   else if(MA>=6)
   {
       printf("C");
   }
   else if(MA>=4)
   {
       printf("D");
   }
   else
   {
       printf("E");
   }
  
   return 0;
}
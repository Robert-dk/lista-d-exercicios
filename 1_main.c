//Faça um programa que solicite 2 números e informe: a soma dos números, o produto do primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadradada da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e o modulo do primeiro numero. 
#include<stdio.h>
#include<math.h>

int main(){

   float n1, n2, soma, produto, quadrado, soma_quadrados, seno, modulo;
   printf("Numero 1: ");
   scanf("%f", &n1);

   printf("Numero 2: ");
   scanf("%f", &n2);
  
   soma = n1 + n2;
   produto = n1 * (n2 * n2);
   quadrado = n1 * n1;
   soma_quadrados = sqrt(n1) + sqrt(n2);
   seno = sin(n1)-(n2);
   modulo = abs(n1);

   printf("\nsoma dos numeros: %.2f\n", soma);
   printf("produto do primeiro pelo quadrado do segundo: %.2f\n", produto);
   printf("quadrado do primeiro numero: %.2f\n", quadrado);
   printf("soma dos quadrados: %.2f\n", soma_quadrados);
   printf("o seno da diferença do primeiro número pelo segundo: %.2f\n", seno);
   printf("modulo do primeiro numero: %.2f\n", modulo);
}


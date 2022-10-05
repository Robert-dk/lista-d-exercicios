//A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura em Celsius e Tf em Fahrenheit. Faça um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de 1 em 1.
#include <stdio.h>

int main () { 
  float Tc;

  for (Tc=40; Tc<=75; Tc++)
    printf(" %.0f TC = %.1f TF \n", Tc , 248, (((Tc*9.0)/5.0)+32.0), 248);
}
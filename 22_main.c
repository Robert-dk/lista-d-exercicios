//Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em seguida, o programa deverá apresentar na tela os resultados.
#include <stdio.h>

int main() {
  int num[10], cont, soma=0, sub=0;

  for(cont=0;cont<10;cont++)
  {
    printf("digite o %i° número inteiro: ", cont+1);
    scanf("%i", &num[cont]);

    if(cont%2!=0)
      sub-=num[cont];
    else
      soma+=num[cont];  
  }
  printf("\na soma dos números das posições pares é: %i\n", soma);
  printf("\na subtração dos números das posições ímpares é: %i", sub);
  return 0;
}
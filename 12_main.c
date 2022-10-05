//Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes.
#include <stdio.h>

int main(void) {
  int iddPedro, iddJoana, iddIsmael;

  printf("digite a idade de Pedro: ");
  scanf("%i", &iddPedro);
  printf("digite a idade de Joana: ");
  scanf("%i", &iddJoana);
  printf("digite a idade de Ismael: ");
  scanf("%i", &iddIsmael);

  if(iddPedro > iddJoana && iddPedro > iddIsmael)
    printf("\nPedro é o mais velho");
  else if (iddJoana > iddIsmael && iddJoana > iddPedro)
         printf("\nJoana é a mais velha");
  else if(iddIsmael > iddJoana && iddIsmael > iddPedro)
         printf("\nIsmael é o mais velho");

  return 0;
}
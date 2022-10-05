//Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma que as notas são informadas corretamente no intervalo de 1 a 10.
#include <stdio.h>

int main () {
  int notas[10];  

  for(int i = 0;i < 10;i++) {   
  int nota;   
   printf("digite a nota do aluno %i: ", i + 1);

   while(scanf("%i", &nota)==1) {break;}
   notas[i] = nota;
}
  int soma = 0;
  for(int i = 0;i < 10;i++) {
   soma += notas[i];
}
  printf("soma das notas: %i\n", soma);  
  float media = (float) soma / 10;
  printf("média das notas: %.2f\n", media);

  int maior = 0;
for(int i = 0;i < 10;i++) {
   if(notas[i] > maior) {
       maior = notas[i];
   }
}
printf("a maior nota: %i\n", maior);
  
  int menor = 10;
for(int i = 0;i < 10;i++) {
   if(notas[i] < menor) {
       menor = notas[i];
   }
}
printf("a menor nota: %i\n", menor);
  
}
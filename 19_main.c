//Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro. 
#include <stdio.h>

int main() {
  int i, n; 
  int qntd = 5;

    printf("até onde considerar: ");
    scanf("%i", &n);

float vet[qntd], maior = 0;

for (i = 0; i < qntd; i++) {   
    printf ("digite um número: ");
    scanf ("%f", &vet[i]);
}
  
for (i = 0; i < n; i++) {
    if (i == 0) {
        maior = vet[i];
    }
    if (vet[i] > maior) {
        maior = vet[i];
    }
}
printf ("maior = %.2f\n", maior);
}
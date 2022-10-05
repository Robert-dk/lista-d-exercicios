//Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados. 
#include <stdio.h>
#define N 6
int main() {
    int vetOriginal[N], vetInvert[N];
    int i;
    for(i = 0; i < N; i++) {
        printf("digite um número: \n");
        scanf("%i", &vetOriginal[i]);
    }
    for(i = 0; i < N; i++) {
        vetInvert[i] = vetOriginal[N-i-1];
        printf("\no vetor invertido é: %i", vetInvert[i]);
    }
    return 0;
}
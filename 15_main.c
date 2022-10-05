//Faça um programa que mostre todos os números pares existentes entre 1 e 50.
#include <stdio.h>
int main () {
    for (int i=1; i<=50/2; i++) {
        printf ("Número par: %i\n",i*2);
    }
}
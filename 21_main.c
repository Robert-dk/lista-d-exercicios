//Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses números em pares e ímpares e os armazenem em dois outros vetores separando pares e ímpares, exibindo os resultados na tela.
#include <stdio.h>
int main() {

    int tampar, tamimpar, i, vetdig[12], vetpar[12], vetimpar[12];
    tampar = 0;
    tamimpar = 0;

    for (i = 0; i < 12; i++) {
        printf("\ndigite o %d° numero: ", i + 1);
        scanf("%i%*c", &vetdig[i]);

        if (vetdig[i] % 2 == 0) {
            vetpar[tampar] = vetdig[i];
            tampar++;
        }
        else {
            vetimpar[tamimpar] = vetdig[i];
            tamimpar++;
        }
    }

    printf("\nvetor par:\n");
    for (i = 0; i < tampar; i++) {
        printf("%i\n", vetpar[i]);
    }

    printf("\nvetor impar:\n");
    for (i = 0; i < tamimpar; i++) {
        printf("%i\n", vetimpar[i]);
    }
    return 0;
}
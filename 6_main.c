//Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if" ou o operador de condição "?".
#include <stdio.h>

int main() {

    float produto, valorInflacao;
    
    printf("informe o preço do produto: ");
    scanf("%f", &produto);
    
    while(produto < 100 && produto > 0) {
       valorInflacao = produto + (produto * 0.10);
       printf("\nvalor do produto inflacionado: %2.f", valorInflacao);
       break;
    }

    while (produto >= 100 && produto > 0) {
        valorInflacao = produto + (produto * 0.20);
        printf("\nvalor do produto inflacionado: %2.f", valorInflacao);
        break;
    }
    return 0;
}
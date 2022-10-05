//Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor que 50.
#include <stdio.h>

int main() {

    int num;
    
    printf("digite um número inteiro: ");
    scanf("%i", &num);
    
    if (num%2==0) {
       printf("o número digitado é par\n");
       if (num > 15) {
           printf("o número é maior que 15");
       } else {
           printf("o número é menor que 15");
       }   
    }

    if (num%2==1) {
        printf("o número digitado é ímpar\n");
        if (num < 50) {
            printf("o número é menor que 50");
        } else {
            printf("o número é maior que 50");
        } 
    }
    return 0;
}
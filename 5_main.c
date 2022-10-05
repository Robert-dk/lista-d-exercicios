//Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere) para os códigos de 0 a 127
#include<stdio.h>
int main()
{
    int i=0; 
    for(i=0;i<127;i++)
    printf("decimal: %i\toctal: %o\thexadecimal: %x\tcaractere: %c \n",i,i,i,i);
}
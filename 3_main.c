//Escreva um programa que leia um número na base decimal e em seguida imprima esse mesmo número nas bases octal e hexadecimal.
#include <stdio.h>

int main()
{
  int d;
  printf("base decimal= "); 
  scanf("%i", &d);
    printf("\nbase octal: %x\n", d);
    printf("base hexa: %o", d);

    return 0;
}
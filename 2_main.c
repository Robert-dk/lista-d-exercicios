//Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o correspondente em Celsius e em Kelvin:
#include <stdio.h>
int main(void)
{
float celsius, fahrenheit, kelvin;
printf("valor da temperatura em Fahrenheit = "); 
scanf("%f", &fahrenheit);
celsius = (fahrenheit - 32) * 5 / 9;
kelvin = (fahrenheit - 32) * 5 / 9 + 273,15;
printf("\nvalor da temperatura em Celsius = %f", celsius);
printf("\nvalor da temperatura em Kelvin = %f", kelvin);
return(0);
}
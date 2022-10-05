/*Faça um programa que lê dois valores e imprime:
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/
#include <stdio.h>
int main() {
int valor1, valor2, i;

printf("Por favor informe o primeiro valor: ");
scanf("%i",&valor1);
printf("Por favor informe o segundo valor: ");
scanf("%i",&valor2);
if (valor1 == valor2){
   printf("valores iguais\n");
}else {
  if (valor1 < valor2) {
    printf("o primeiro valor é menor que o segundo \n");
    for(i= valor1;i<=valor2;i++){
      printf("%i \n",i);
    };
    
  } else {
    printf("O segundo valor é menor que o primeiro\n");
    for(i=valor1;i>=valor2;i--){
      printf("%i \n",i);
    };
  };
};
}

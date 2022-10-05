/**************************************************************
Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5           
**************************************************************/
#include <stdio.h>

int main(void) {

    int num, i, j;

    printf("digite o número máximo do triângulo, ele deve ser ímpar.\n");
    scanf("%i", &num);


    if (num % 2 ==0)
    {
       printf("Numero invalido.\n");
       return 1;
    }
    else
    {
        for( i = 0; i<= (num / 2) + 1; i++)
        {
            for ( j = i + 1; j <= num - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
              printf(" ");
         }
    }

    return 0;
}
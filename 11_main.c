//Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma. O programa deve verificar se a quantidade de alunos é igual a de alunas.
#include <stdio.h>

int main() {

    int alunos, alunas;
    
    printf("digite a quantidade de alunos: ");
    scanf("%i", &alunos);
    printf("digite a quantidade de alunas: ");
    scanf("%i", &alunas);
 
    if (alunos > alunas) {
       printf("\nexistem mais alunos.\no TOTAL de alunos é %i", alunos+alunas);
    }

    if (alunos < alunas) {
       printf("\nexistem mais alunas.\no TOTAL de alunos é %i", alunos+alunas);
    }
    if (alunos == alunas) {
       printf("\nnúmero de alunos são iguais.\no TOTAL de alunos é %i", alunos + alunas);
    }
    return 0;
}
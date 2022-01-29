/*
Faça um programa que receba uma matriz A(10, 10) digitada pelo usuário. Em
seguida, some e apresente ao usuário o resultado da soma de todos os elementos
das linhas 3 e 7 da matriz
*/

#include <stdio.h>

int main(){

    int tam = 10;
    int A[tam][tam];
    int i,j;
    int soma = 0;

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite um valor para a posicao A[%d][%d] =", (i+1), (j+1));
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(i == 2 || i == 6){
                soma = soma + A[i][j];
            }
        }
    }

    printf("A soma dos elementos das linhas 3 e 7 = %d\n", soma);


return 0;
}

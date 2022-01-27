/*
Faça um programa que receba um vetor K(15) e apresente na tela apenas os valores
ímpares de K. Ao final, guarde todos os elementos ímpares em um vetor P.
*/

#include <stdio.h>

int main(){

    int tam = 15, i;
    int K[tam];
    int contaImpares = 0;
    int vetorPosicao[tam];

    for(i = 0; i < tam; i++){
        printf("Digite o valor para a posicao %d do vetor = ", (i+1));
        scanf("%d", &K[i]);

        if(K[i]%2 != 0){
            vetorPosicao[contaImpares] = i;
            contaImpares = contaImpares + 1;
        }
    }
    //Declaro um novo vetor
    int P[contaImpares];

    for(i = 0; i < contaImpares; i++){
        P[i] = K[vetorPosicao[i]];
    }

    for(i = 0; i < contaImpares; i++){
        printf("%d\n", P[i]);
    }

return 0;
}

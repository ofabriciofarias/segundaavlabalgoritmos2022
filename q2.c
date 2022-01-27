/*

Elabore um programa que seja capaz de calcular a média aritmética de vários
valores inteiros positivos, lidos externamente. Caso o usuário digite um valor
negativo, informe com uma mensagem de erro e peça que ele tente outra vez.
Como critério de parada do programa, informe ao usuário que para deixar o
programa ele deve digitar o valor -1

*/

#include <stdio.h>

int main(){

    int valor = 0;
    int contador = 0;
    int somaValor = 0;
    float mediaValor;


    while(valor != -1){
        printf("Digite o valor = ");
        scanf("%d", &valor);

        if(valor >= 0){
            somaValor = somaValor + valor;
            contador = contador + 1;
        }else if(valor == -1){
            printf("Saindo do programa, agora vamos apresentar a media\n");
        }else if(valor < -1){
            printf("Valor invalido e nao aceito pelo programa. Tente outra vez\n");
        }
    }



    if(contador == 0){
        printf("Fechando o programa, nao foi possivel calcular a media\n");
    }else{
        mediaValor = (float) somaValor/contador;
        printf("O valor da media = %.2f\n", mediaValor);
    }

return 0;
}

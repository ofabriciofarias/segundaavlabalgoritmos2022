/*

Chico tem 1,45 metro e cresce 1,8 cent�metros por ano, enquanto Z� tem 1,10
metro e cresce 4 cent�metros por ano. Construa um programa que calcule e
imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico.

*/

#include <stdio.h>

int main(){

    float chico = 1.45;
    float ze = 1.1;
    int anos = 0;

    while(ze <= chico){
        anos = anos + 1;

        chico = chico + 0.018;
        ze = ze + 0.04;
    }

    printf("Ze passou em altura chico em %d anos\n", anos);

return 0;
}

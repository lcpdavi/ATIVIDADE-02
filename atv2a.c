#include<stdio.h>

int main(){
    //Escreva um programa que receba dois numeros e mostr a soma, subtracao, multiplicacao e a divisao desses numeros.

    int soma, subt, div, multip, X, Y;

    printf("Digite o valor:\n");
    scanf("%d", &X);
    printf("Digite o segundo valor:\n");
    scanf("%d", &Y);

    soma = X + Y;
    subt = X - Y;
    div = X / Y;
    multip = X * Y;

    printf("Resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtracao: %d.\n", subt);
    printf("Divisao: %d.\n", div);
    printf("Multiplicacao: %d.\n", multip);


}
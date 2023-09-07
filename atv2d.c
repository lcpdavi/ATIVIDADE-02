#include<stdio.h>

int main(){
    //Dado um valor em raise a cotacao do dolar, converta esse valor para dolares.
    float t = 4.91;
    float valorReal;
    float valorDolar;

    printf("digite o valor:\n");
    scanf("%f", &valorReal);

    valorDolar = valorReal / t;


    printf("Resultado:\n");
    printf("o valor %.2f convertidos em dolares e %.2f", valorReal, valorDolar);





}
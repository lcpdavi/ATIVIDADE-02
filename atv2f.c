#include<stdio.h>

int main(){
    //Escreva um programa que pergunte qual o raio de um circulo e imprima a sua area.

    float pi = 3.14, area, raio;

printf("qual o raio do circulo:\n");
scanf("%f", &raio);

area = pi * raio * raio;

printf("Area = %.2f m2 \n", area);


}
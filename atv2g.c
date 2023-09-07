#include<stdio.h>

int main(){
    //Faça um algoritmo que leia a idade de uma pessoa expressa em ano, meses e dias e escreva a idade dessa pessoa expressa
    //em dia. Considerar ano com 365 dias e mes com 30 dias.

    int meses, ano, dias, totalDias;

    printf("insira a idade em anos:\n");
    scanf("%d", &ano);
    printf("insira os meses:\n");
    scanf("%d", &meses);
    printf("insira os dias:\n");
    scanf("%d", &dias);
    

    totalDias = ano * 365 + meses * 30 + dias;


    printf("resultado:\n");
    printf("%d totalDias\n", totalDias);





}
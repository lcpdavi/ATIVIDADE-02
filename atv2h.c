#include<stdio.h>

int main(){
    //Escreva um algoritmo para ler o salario mensal atual de um funcionario e o percentual de reajuste. Calcular e escrever o valor do novo salario.

    int salarioAtual = 1500, novoSalario;
    float reajuste = 0.15;

    printf("salario:\n");
    scanf("%d", &salarioAtual);

    reajuste = 1500 * 0.15 ;
    novoSalario = salarioAtual + reajuste;

    printf("O reajuste foi de: %.2f\n", reajuste);
    printf("Novo Salario: %d\n", novoSalario);


}
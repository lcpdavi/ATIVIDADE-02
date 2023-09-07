#include<stdio.h>

int main(){
    //Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão 
    //também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que 
    //leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe 
    //por carro vendido. Calcule e escreva o salário final do vendedor.

    int salarioFixo = 0, comissaoFixa = 0, salarioFinal, carrosVendidos;
    float vendasEfetuadas = 0.05;

    printf("Insira o salario:\n");
    scanf("%d", &salarioFixo);
    printf("Insira a comissao:\n");
    scanf("%d", &comissaoFixa);
    printf("Numero de carros vendidos:\n");
    scanf("%d", &carrosVendidos);
    printf("VendasEfetuadas:\n");
    scanf("%f", &vendasEfetuadas);

    salarioFinal = salarioFixo + (salarioFixo * vendasEfetuadas) + comissaoFixa;
    comissaoFixa = carrosVendidos;

    printf("O salario final do vendedor e de: %d\n", salarioFinal);
    


}
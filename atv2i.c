#include<stdio.h>

int main(){
  // O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
 //porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
 //que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
 //algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

  int custoFabrica;
  float custoConsumidor, percenDistribuidor = 0.28, impostos = 0.45;

  printf("insira o valor de fabrica:\n");
  scanf("%d", &custoFabrica);

  custoConsumidor = custoFabrica + (custoFabrica * percenDistribuidor) + (custoFabrica * impostos);

  printf("Valor total do carro: %.2f\n", custoConsumidor);


}
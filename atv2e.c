#include<stdio.h>
#include<math.h>

int main(){
    //Faça um programa em que o usuario digite o custo de uma determinada mercadoria, em seguida, adiciona-se aso custo o valor do frete
    //e despesas eventuais(também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a porcentagem
    //de lucro da mercadoria.

    float custo, valordoFrete, despesas, valordeVenda, lucro, porcentagemLucro;

    printf("Insira o valor do custo:\n");
    scanf("%f", &custo);
    printf("Insira o valor do frete:\n");
    scanf("%f", &valordoFrete);
    printf("Insira o valor das despesas:\n");
    scanf("%f", &despesas);
    printf("Valor de venda;\n");
    scanf("%f", &valordeVenda);
 
    lucro =  valordeVenda - (custo + valordoFrete + despesas);

    porcentagemLucro = (lucro / custo) * 100;

    printf("O lucro foi de: R$ %.2f\n", lucro);
    printf("A porcentagem do lucro foi de: %.2f\n", porcentagemLucro);

}

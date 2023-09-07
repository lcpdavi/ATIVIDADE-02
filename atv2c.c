#include<stdio.h>

int main(){
    //Dada as medidas de uma sala, informe sua area.

    int area, comprimento, largura;

    printf("informe o comprimento da sala:\n");
    scanf("%d", &comprimento);
    printf("informe a largura da sala:\n");
    scanf("%d", &largura);

    area = comprimento + largura;

    printf("Area total da sala: %d\n", area);
    


}
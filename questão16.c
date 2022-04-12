#include <stdio.h>
#include <math.h>

int main(){
    float horas_trab,hora,p_desconto,desconto,bruto,liquido;

    printf("\nDigite a quantidade de horas trabalhadas: \n");
    scanf("%f",&horas_trab);

    printf("\nDigite o valor a receber por hora: \n");
    scanf("%f",hora);

    printf("\nDigite o percentual de desconto: \n");
    scanf("%f",&p_desconto);

    bruto=horas_trab*hora;
    desconto=(p_desconto/100)*bruto;
    liquido=bruto-desconto;

    printf("Salario bruto %2.f\ndesconto: %2.f\nsalario liquido: %2.f\n",bruto,desconto,liquido);
    
}
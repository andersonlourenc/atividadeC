#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int dias_trab;
float Salario=50.25,liquido,bruto,gratificacao;


printf("Quantos dias foram trabalhados:\n");
scanf("%d",&dias_trab);

if (dias_trab <= 10)
{
   liquido=Salario*dias_trab; 
   bruto=(liquido- (liquido *0.1));
   printf("Salario de acordo com os dias trabalhados R$: %2.f,00",bruto);

}else if (dias_trab > 10 && dias_trab <= 20)
{
    liquido=Salario*dias_trab;
    gratificacao=liquido*(0.2);
    bruto=gratificacao+liquido;
    bruto=(bruto- (bruto *0.1));
   printf("Salario de acordo com os dias trabalhados R$: %2.f,00",bruto);

}else if (dias_trab > 20)
{
   
    liquido=Salario*dias_trab;
    gratificacao=liquido*(0.3);
    bruto=gratificacao+liquido;
    bruto=(bruto- (bruto *0.1));
   printf("Salário de acordo com os dias trabalhados R$: %2.f,00",bruto);
}




}
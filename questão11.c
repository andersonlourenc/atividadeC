#include <stdio.h>

int main(){
 float real, dolar, conversao;
 printf("Informe o valor do dólar:\n");
 scanf("%f", &dolar);
 printf("Informe que valor em reais que deseja convereter:\n");
 scanf("%f", &real);
 conversao = real/dolar;
 printf("O valor em real R$ %.2f covertido em dolar fica US$ %.2f\n.",real,conversao);
 
 return 0;
}

#include <stdio.h>

int main(){
int comprimento, largura, altura, volume;
  printf("\nCalcule o volume da caixa!\n\n");
  printf("Informe o comprimento da caixa:\n");
  scanf("%d",&comprimento); 
  printf("Informe a lagura da caixa:\n");
  scanf("%d", &largura);
  printf("Informe a altura de caixa:\n");
  scanf("%d", &altura);
  
  volume = comprimento * largura * altura;
  printf("O volume da caixa = %d x %d x %d que e igaual a %d\n.",comprimento,largura,altura,volume);
 
 return 0;
}

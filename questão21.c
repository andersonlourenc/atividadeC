#include <stdio.h>
int main(){

 int numA, numB;
 printf("Digite o primeiro numero inteiro:\n");
 scanf("%d",&numA);
 printf("Digite o segundo numero inteiro:\n");
 scanf("%d",&numB);
 printf("O numero numA %s\n",(numA % 
numB ==0 ? "é multiplo de numB":"não e multiplo de numB"));
 
 return 0;

}

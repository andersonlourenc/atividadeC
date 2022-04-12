#include <stdio.h>
#include <math.h>

int main(){
    int potencia=0,x;


    printf("Digite um valor inteiro para ser elevado ao quadrado:\n");
    scanf("%d",&x);
    potencia=pow(x,2);

    printf("\nO resultado é: %d\n", potencia);


}

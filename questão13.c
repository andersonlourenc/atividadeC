#include <stdio.h>

int main(){
    int A, B,Aux;

    printf("Digite um valor de A:\n");
    scanf("%d",&A);

    printf("\nDigite um valor de B:\n");
    scanf("%d",&B);
    Aux=A;
    A=B;
    B=Aux;

    printf("Valor de A: %d\nValor de B: %d",A,B);

  
}
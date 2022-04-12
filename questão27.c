#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,Sm,Pd,Ex,M;

    printf("Digite os valores: \n");
    scanf("%f %f %f",&a,&b,&c);

    Sm=a+b+c;
    M=Sm/3;

    printf("A média Aritmetica e: %f \n",M);

    Ex = 1.0/3;
    Pd=a*b*c;
    M=pow(Pd,Ex);

    printf("A média Geometrica e: %f \n",M);

  return 0;

}
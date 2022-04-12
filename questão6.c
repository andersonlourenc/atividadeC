#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int sexo = 0;
    float altura, peso_ideal;
    
    printf("Digite sua altura: \n");
    scanf("%f",&altura);

    printf("Digite qual e o seu sexo: \n 1-Homem \n 2-Mulher \n");
    scanf("%d",&sexo);

    switch (sexo)
    {
    case 1:
        peso_ideal = 72,7 * altura - 58;
        printf("O Peso ideal: %2.f KG", peso_ideal);
        break;
    case 2:
         peso_ideal = 62,1 * altura - 44,7;
        printf("O Peso ideal: %2.f KG", peso_ideal);
        break;

    default:

        printf("Opcao invalida");
        break;
    }

    return 0;
}

#include <stdio.h>

int main(){
    
    float conta, acrescimo, contafinal;
    
    printf("Qual o valor da conta? ");
    scanf("%f", &conta);
    
    acrescimo = (conta * 10)/100;
    contafinal = conta + acrescimo;
    
    printf("O valor da conta adicionados os 10 é: ");
    printf("%.2f", contafinal);
    
    return 0;
    
}

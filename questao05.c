#include <stdio.h>

int main(){

    float conta;

    printf("Informe o valor da conta: ");
    scanf("%f", &conta);

    printf("Com a taxa, o valor total da conta é: R$%.2f", conta + (conta * 0.1));

    return 0;
}
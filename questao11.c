#include <stdio.h>

int main(){
    float dinheiro, cotacao;
    char lixo;

    printf("Informe a cotação do dólar, em reais: ");
    scanf("%f", &cotacao);
    scanf("%c", &lixo);

    printf("Informe a quantia de reais que deseja converter: ");
    scanf("%f", &dinheiro);
    scanf("%c", &lixo);

    printf("R$%.2f vale $%.2f hoje", dinheiro, dinheiro /cotacao);
    return 0;
}
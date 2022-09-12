#include <stdio.h>

int main(){
    int altura, largura, comprimento;
    char lixo;
    printf("Informe a altura da caixa: ");
    scanf("%d", &altura);
    scanf("%c", &lixo);

    printf("Informe a largura da caixa: ");
    scanf("%d", &largura);
    scanf("%c", &lixo);

    printf("Informe o comprimento da caixa: ");
    scanf("%d", &comprimento);
    scanf("%c", &lixo);

    printf("Esta caixa tem um volume de: %d", altura *largura *comprimento);

    return 0;
}
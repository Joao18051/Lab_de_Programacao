#include <stdio.h>

int main(){
    int num_1, num_2, transicao, somatorio;
    char lixo;

    puts("Informe os dois números inteiros para saber a somatória dos valores pares entre eles: ");
    printf("\nPrimeiro valor: ");
    scanf("%d", &num_1);
    scanf("%c", &lixo);

    printf("\nSegundo valor: ");
    scanf("%d", &num_2);
    scanf("%c", &lixo);

    if (num_1 > num_2){
        transicao = num_1;
        num_1 = num_2;
        num_2 = transicao;
    }

    transicao = 0;

    for (num_1; num_1 <= num_2; num_1++)
    {
        if(!(num_1 %2))
            if(!transicao) {
                somatorio = num_1;
                transicao++;
            } else {
                somatorio += num_1;
            }
    }

    printf("\nO somatório vale: %d", somatorio);
    return 0;
}
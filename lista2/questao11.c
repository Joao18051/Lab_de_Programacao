#include <stdio.h>

int main(){
    int num_1, num_2, transicao;
    char lixo;

    puts("Informe os dois números inteiros que representem a faixa que quer verificar: ");
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

    printf("\nOs múltiplos de 4 ao quadrado, entre %d e %d, são: ", num_1, num_2);

    for (num_1; num_1 <= num_2; num_1++)
    {
        if(!(num_1 %4))
            printf("%d ", num_1 *num_1);
    }

    return 0;
}
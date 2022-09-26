#include <stdio.h>

int main(){
    int num_um, num_dois, transicao, cont = 0;

    puts("Informe a faixa numérica para verificar a quantidade de números divisíveis por 3: ");

    printf("\nPrimeiro valor: ");
    scanf("%d", &num_um);

    printf("\nSegundo valor: ");
    scanf("%d", &num_dois);

    if(num_um > num_dois){
        transicao = num_dois;
        num_dois = num_um;
        num_um = transicao;
    }

    for(int i = num_um; i <= num_dois; i++){
        if(!(i %3))
            cont++;
    }

    printf("\nA quantidade de números divisíveis por 3 entre %d e %d é: %d", num_um, num_dois, cont);

    return 0;
}
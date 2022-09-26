#include <stdio.h>

int main(){
    int num_primeiro = 1, num_segundo = 1, transicao, cont = 0;
    do{
        printf("%d ", num_segundo);

        transicao = num_primeiro;
        num_primeiro += num_segundo;
        num_segundo = transicao;

        cont++;
    } while(cont <= 19);

    return 0;
}
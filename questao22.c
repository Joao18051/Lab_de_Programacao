#include <stdio.h>

int main(){
    char simbolo;

    printf("Informe um síbolo que quer saber o valor ASCII: ");
    scanf("%c", &simbolo);

    printf("%c em ASCII vale %d.", simbolo, simbolo);

    return 0;
}
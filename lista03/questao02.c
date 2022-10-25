#include <stdio.h>
#include <string.h>

int main(){
    char frase, letra, *verificar, lixo;

    printf("\nDigite uma frase: ");
    scanf("%s", &frase);
    scanf("%c", &lixo);

    printf("\nInforme um caractere que deseja saber se há na frase: ");

    verificar = strchr(frase, letra);

    if(!verificar == NULL)
        printf("%c está presente em %s", letra, frase);
    else
        printf("%c não está presente em %s", letra, frase);

    return 0;
}
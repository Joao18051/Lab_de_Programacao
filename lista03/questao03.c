#include <stdio.h>

int main(){
    char string, quantidade = 0;
    int contador;

    printf("\nDigite algo: ");
    scanf("%s", &string);

    for (contador = 0; string[contador] != '\0'; contador++)
    {
    }
    
    printf("A quantidade de caracteres digitados foi: %d", contador);

    return 0;
}
#include <stdio.h>

int main(){
    unsigned char *frase;
    int contador = 0;

    puts("Informe uma string de caracteres: ");
    scanf("%s", frase);

    do{
        contador++;
    } while (*(frase +contador) != '\0');
    
    printf("\nA quantidade de caracteres nessa string é: %d\n", contador);

    return 0;
}
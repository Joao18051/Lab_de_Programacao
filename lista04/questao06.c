#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    unsigned char *string_og = NULL, *string_cp = NULL;
    int cont = -1;

    string_og = malloc(TAM *sizeof(char));
    string_cp = malloc(TAM *sizeof(char));

    printf("\nInforme uma string: ");
    scanf("%s", string_og);

    do {
        cont++;
        *(string_cp +cont) = *(string_og +cont);
    } while (*(string_og +cont) != '\0');

    printf("\nA cópia dessa string é: %s\n", string_cp);

    return 0;
}
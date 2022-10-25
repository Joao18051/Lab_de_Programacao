#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    unsigned char *string_st = NULL, *string_nd = NULL, *string_ct = NULL;
    int cont = 0, size = -1;

    string_st = malloc(TAM *sizeof(char));
    string_nd = malloc(TAM *sizeof(char));
    string_ct = malloc(TAM +TAM *sizeof(char));

    printf("\nInforme uma string: ");
    scanf("%s", string_st);

    printf("\nInforme uma outra string: ");
    scanf("%s", string_nd);

    do {
        *(string_ct +cont) = *(string_st +cont);
        cont++;
    } while (*(string_st +cont) != '\0');
    
    do {
        size++;
        *(string_ct +cont +size) = *(string_nd +size);
    } while (*(string_nd +size) != '\0');

    printf("\nA concatenação destas duas é: %s", string_ct);

    return 0;
}
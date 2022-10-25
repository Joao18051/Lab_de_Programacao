#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    unsigned char *string = NULL, caracter, quant = 0, lixo;

    string = malloc(TAM *sizeof(char));

    printf("\nInforme uma string: ");
    scanf("%s", string);
    scanf("%c", &lixo);

    printf("\nInforme um caractere para verificar se está presente na string: ");
    scanf("%c", &caracter);

    for (int i = 0; *(string +i) != '\0'; i++){
        if (*(string +i) == caracter){
            if (!quant)
                printf("\n%c está presente na posição %d", caracter, i +1);
            else
                printf(", %d", i +1);

            quant++;
        } 
    }

    if (!quant)
        printf("\nO caractere não está presente");

    return 0;
}
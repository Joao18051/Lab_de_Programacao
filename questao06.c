#include <stdio.h>

int main(){

    float altura = 0;
    char sexo, trash;

    do {
        if (altura){
            printf("Valor inválido! \n");
        }
        printf("Informe seu sexo, 'm' para masculino e 'f' para feminino: ");
        scanf ("%c", &sexo);
        scanf("%c", &trash);
        altura ++;
    } while (sexo != 102 && sexo != 109);
    //Considera os valores ASCII dos caracteres
    printf("Informe sua altura, em metros: ");
    scanf("%f", &altura);

    if ((int)sexo == 109)
        altura = (72.7 *altura) -58;
    else 
        altura = (62.1 *altura) -44.7;

    printf("O peso ideal dessa pessoal é de: %.2fKg", altura);

    return 0;
}
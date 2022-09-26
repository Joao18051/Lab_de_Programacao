#include <stdio.h>
#include <math.h>

int main(){
    int numero, ultimo, numrever = 0, contador = 0;

    printf("Informe um valor inteiro de três dígitos: ");
    scanf("%d", &numero);

    while (numero){
        ultimo = numero %10;
        numero = numero /10;
        numrever += ultimo *(100 /(pow(10, contador)));
        contador++;
    } 
    printf("Este número ao contrário é: %d",numrever);

    return 0;
}
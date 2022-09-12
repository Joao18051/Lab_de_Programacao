#include <stdio.h>

int main(){

    int x;

    printf("Informe um número inteiro: ");
    scanf("%d", &x);

    printf("%d em octal é: %o \n", x, x);
    printf("%d em hexa é: %X", x, x);

    return 0;
}
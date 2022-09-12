#include <stdio.h>

int main(){

    int x;

    printf("Informe um valor: ");
    scanf("%d", &x);

    printf("%d com uma casa decimal é %.1f", x, (float)x);

    return 0;
}
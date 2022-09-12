#include <stdio.h>

int main(){

    int x;

    printf("Informe um valor: ");
    scanf("%d", &x);

    printf("O triplo de %d é: %d \n", x, 3* x);
    printf("O quadrado de %d é: %d \n", x, x* x);
    printf("O meio de %d é: %.0f", x, (float)x / 2);
    
    return 0;
}
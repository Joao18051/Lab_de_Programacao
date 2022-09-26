#include <stdio.h>

int main(){
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);

    printf("Quadrado de %d vale: %d", num, num *num);

    return 0;
}
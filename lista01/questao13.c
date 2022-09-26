#include <stdio.h>

int main(){
    int a = 3, b= 67, c;

    printf("Valor inicial de a: %d\n", a);
    printf("Valor inicial de b: %d\n", b);

    c = a;
    a = b;
    b = c;

    printf("Valor atual de a: %d\n", a);
    printf("Valor atual de a: %d\n", b);

    return 0;
}
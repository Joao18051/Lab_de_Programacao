#include <stdio.h>

int main(){
    int x;
    puts("Informe um número: ");
    scanf("%d", &x);

    printf("Seu valor absoluto é %d", (!(x < 0)? x : x *-1));

    return 0;
}
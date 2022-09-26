#include <stdio.h>

int main(){
    int num;
    puts("Informe um número: ");
    scanf("%d", &num);

    printf("%d é %s", num, (!(num %2)?"par":"ímpar"));

    return 0;
}
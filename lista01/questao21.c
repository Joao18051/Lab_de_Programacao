#include <stdio.h>

int main(){
    int num1, num2, mult;
    char lixo;
    
    puts("Informe o primeiro número: ");
    scanf("%d", &num1);
    scanf("%c", &lixo);

    puts("Informe o segundo número: ");
    scanf("%d", &num2);
    scanf("%c", &lixo);

    printf("%d é %s de %d", num1, (!(num1 %num2)?"multiplo":"não multiplo"), num2);

    return 0;
}
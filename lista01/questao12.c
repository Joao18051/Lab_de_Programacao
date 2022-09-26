#include <stdio.h>

int main(){
    int num1, num2;
    char lixo;

    puts("Informe o primeiro valor: ");
    scanf("%d", &num1);
    scanf("%c", &lixo);

    puts("Informe o segundo valor: ");
    scanf("%d", &num2);
    scanf("%c", &lixo);

    printf("%d + %d = %d\n", num1, num2, num1 +num2);
    printf("%d x %d = %d\n", num1, num2, num1 *num2);
    printf("%d - %d = %d\n", num1, num2, num1 -num2);
    printf("%d / %d = %d\n", num1, num2, num1 /num2);
    printf("%d %% %d = %d\n", num1, num2, num1 %num2);

    return 0;
}
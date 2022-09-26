#include <stdio.h>

int main(){
    int dividendo, divisor;
    char lixo;

    puts("---Divisão de números---");
    printf("\nInforme o dividendo: ");
    scanf("%d", &dividendo);

    do{
        printf("\nInforme o divisor: ");
        scanf("%d", &divisor);

        printf("%s", (divisor)? "":"\nO divisor não pode ser 0");
    } while (!divisor);

    printf("\n%d / %d vale %.2f\n", dividendo, divisor, ((float)dividendo /divisor));
    
    return 0;
}
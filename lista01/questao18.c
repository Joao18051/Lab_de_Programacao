#include <stdio.h>

int main(){
    float raio;

    printf("Informe o valor do raio de um círculo: ");
    scanf("%f", &raio);

    printf("O valor do diâmetro é: %.2f;\n", raio *2);
    printf("O valor da sua circuferencia é: %.2f;\n", 2 *3.14159 *raio);
    printf("O valor de sua área é de: %.2f", 3.14159 *raio *raio);

    return 0;
}
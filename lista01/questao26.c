#include <stdio.h>
#include <math.h>

int main(){
    int x, y, a, b;
    char lixo;

    printf("Informe o valor da abscissas (x) do primeiro ponto: ");
    scanf("%d", &x);
    scanf("%c", &lixo);

    printf("Informe o valor das ordenadas (y) do segundo ponto: ");
    scanf("%d", &y);
    scanf("%c", &lixo);

    printf("Informe o valor da abscissas (x) do primeiro ponto: ");
    scanf("%d", &a);
    scanf("%c", &lixo);

    printf("Informe o valor das ordenadas (y) do segundo ponto: ");
    scanf("%d", &b);
    scanf("%c", &lixo);

    x -= a;
    x *= x;

    y -= b;
    y *= y;

    x += y;
    printf("A distância entre estes dois pontos é de: %.2f\n", sqrt((float)x));

    return 0;
}
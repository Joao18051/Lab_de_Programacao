#include <stdio.h>
#include <math.h>

int main(){
    float num, num2, num3;
    char lixo;

    printf("Informe um número decimal: ");
    scanf("%f", &num);
    scanf("%c", &lixo);

    printf("Informe outro número decimal: ");
    scanf("%f", &num2);
    scanf("%c", &lixo);

    printf("Informe outro número decimal: ");
    scanf("%f", &num3);
    scanf("%c", &lixo);

    printf("A média aritimética de %.3f, %.3f e %.3f vale: %.3f\n", num, num2, num3, (num + num2 + num3) /3);

    num *= num2 *num3;
    printf("E a média geométrica vale: %.3f\n", pow((float)num, (float)1/3));

    return 0;
}
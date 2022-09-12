#include <stdio.h>

int main(){
    float temp;
    printf("Informe uma temperatura em graus Celsius: ");
    scanf("%f", &temp);

    printf("%.2f°C equivale à %.2f°F", temp, (9 * temp + 160) / 5);

    return 0;
}
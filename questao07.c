#include <stdio.h>

int main(){
    int horas, minutos, segundos;

    printf("Informe uma quantia de horas: ");
    scanf("%d", &horas);
    horas *= 3600;

    printf("Informe uma quantia de minutos: ");
    scanf("%d", &minutos);
    minutos *= 60;

    printf("Informe uma quantia de segundos: ");
    scanf("%d", &segundos);

    segundos += minutos + horas;

    printf("Este tempo vale, em segundos: %ds", segundos);

    return 0;
}
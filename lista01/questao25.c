#include <stdio.h>

int main(){
    int segundos, minutos = 0, horas = 0;

    printf("Informe uma quantia de tempo em segundos: ");
    scanf("%d", &segundos);

    while (segundos >= 3600){
        horas ++;
        segundos -= 3600;
    } 
    
    while (segundos >= 60) {
        minutos++;
        segundos -= 60;
    }

    printf("Este tempo equivale à %d hora (s), %d minuto(s) e %d segundo(s).", horas, minutos, segundos);
    return 0;
}
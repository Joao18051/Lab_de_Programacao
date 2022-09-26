#include <stdio.h>

int main(){
    int numero, fatorial = 1, valor;

    puts("Informe um número que deseja saber o fatorial: ");
    scanf("%d", &numero);

    if(!numero)
        puts("O fatorial de 0 é 1");
    else {
        valor = numero;
        while (numero)
        {
            if(numero != 1){
                fatorial *= numero *(numero -1);
                numero--;
            }
            numero--;
        }
        printf("O fatorial de %d é: %d\n", valor, fatorial);
    }

    return 0;
}
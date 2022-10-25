#include <stdio.h>

#define TAM 15

int main(){
    float vetor[TAM], elemento, menor, maior;
    int contador = 0;
    char lixo;

    do {
        puts("Informe um elemento para o vetor: ");
        scanf("%f", &elemento);
        scanf("%c", &lixo);

        vetor[contador] = elemento;

        contador++;
    } while (contador < TAM);

    printf("\n[");
    for (contador = 0; contador < TAM; contador++)
    {
        if (!contador){
            menor = vetor[contador];
            maior = vetor[contador];
        }

        menor = (menor > vetor[contador])? vetor[contador] : menor;
        maior = (maior < vetor[contador])? vetor[contador] : maior;
        
        if(contador == TAM -1)
            printf("%.2f", vetor[contador]);
        else
            printf("%.2f, ", vetor [contador]);
    }
    printf("]\n");
    
    printf("\nA soma do menor valor (%.2f) com o maior valor (%.2f) do vetor é: %.2f", menor, maior, maior +menor);

    return 0;
}
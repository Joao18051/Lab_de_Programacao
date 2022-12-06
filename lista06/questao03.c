#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MAX 100
#define TAM 10

void PrintArrayInt(int *, int);

struct Info{
    int *vetor;
    int media;
    int quantia;
};

int main(){
    struct Info dados;
    srand(time(NULL));

    dados.vetor= malloc(sizeof(int) *TAM);

    dados.quantia = 0;
    dados.media = 0;
    for(int i = 0; i < TAM; i++){
        *(dados.vetor +i) = INI +rand() %MAX;
        dados.media += *(dados.vetor +i);
        dados.quantia++;
    } 

    PrintArrayInt(dados.vetor, dados.quantia);
    printf("Quantia de elementos: %d\nMédia: %.2f", dados.quantia, (float)dados.media /dados.quantia);

    return 0;
}

void PrintArrayInt(int *array, int size){
    for(int i = 0; i < size; i++){
        if(!i)
            printf(" \n|");
        printf(" %d ", *(array +i));

        if(i == size -1)
            printf("|\n");
    }
}

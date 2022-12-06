#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 1
#define MAX 100

void PrintArrayInt(int *, int);
void SortArrayInt(int *, int, int);

int main(int argc, char **argv){
    if(argc != 2){
        printf("\nErro.\nUse:\n\t\t%s <TamanhoVetor>", argv[0]);
        exit(-1);
    }

    int *vetor;
    srand(time(NULL));

    if(!(vetor = malloc(sizeof(int) *atoi(argv[1])))){
        puts("Erro, memória insuficiente");
        exit(-1);
    }

    for(int i = 0; i < atoi(argv[1]); i++){
        *(vetor +i) = INI +rand() %MAX;
    }

    PrintArrayInt(vetor, atoi(argv[1]));
    SortArrayInt(vetor, atoi(argv[1]), 0);

    printf("Menor elemento: %d\nEndereço: %X\n", *vetor, &*vetor);
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

void SortArrayInt(int *array, int size, int order){
    int bubble;

    if(!order){
        for(int i = 0; i < size; i++){
            for(int j = i; j < size -1; j++){
                if(*(array +i) > *(array +j)){
                    bubble = *(array +i);
                    *(array +i) = *(array +j);
                    *(array +j) = bubble;
                }
            }
        }
    } else {
        for(int i = 0; i < size; i++){
            for(int j = i; j < size -1; j++){
                if(*(array +i) < *(array +j)){
                    bubble = *(array +i);
                    *(array +i) = *(array +j);
                    *(array +j) = bubble;
                }
            }
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void FillArrayInt(int *, int, int);
void PrintArrayInt(int *, int);

int main(int argc, char *argv[]){
    int *array = NULL, *repet = NULL;
    unsigned int tam, valu;

    void (*escolha[])() = {FillArrayInt, PrintArrayInt};

    srand(time(NULL));

    if(argc != 3){
        printf("\nErro.\nUse:\n\n\t%s <TamVetor> <ValElem>\n", *argv);
        exit(-1);
    }

    tam = atoi(argv[1]);
    if(!(array = malloc(tam *sizeof(int)))){
        printf("\nErro, memória insuficiente.\n");
        exit(-1);
    }

    valu = atoi(argv[2]);
    if(valu >= tam){
        printf("\nErro, os valores dos elementos devem ser menores que o tamanho numérico do vetor.\n", *argv);
        exit(-1);
    }
    if(!(repet = malloc(valu *sizeof(int)))){
        printf("\nErro, memória insuficiente.\n");
        exit(-1);
    }
    valu++;

    (escolha[0])(array, tam, valu);
    (escolha[1])(array, tam);

    for(int i = 0; i < valu; i++){
        for(int j = 0; j < tam; j++){
            if(!j)
                *(repet +i) = 0;

            if(*(array +j) == i)
                *(repet +i) += 1;
        }
    }

    (escolha[1])(repet, valu);

    return 0;
}

void FillArrayInt(int *array, int size, int max){
    for(int i = 0; i < size; i++){
        *(array +i) = rand()% max;
    }
}

void PrintArrayInt(int *array, int size){
    for(int i = 0; i < size; i++){
        if(!i)
            printf(" \n|");
        printf(" %d ", *(array +i));

        if(i == size -1)
            printf("|\n ");
    }
}
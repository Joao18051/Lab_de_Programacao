#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

void PrintArrayInt(int *, int);
void FillArrayInt(int *, int, int);

int main(int argc, char *argv[]){
    unsigned int *vetor_st = NULL, *vetor_nd = NULL, *inter = NULL, *rpt = NULL;
    int cont = 0, temp = 0;

    srand(time(NULL));

    if(argc != 3){
        printf("\nErro.\nUse:\n\t%s <TamanhoVetor1> <TamanhoVetor2>\n", argv[0]);
        exit(-1);
    }

    //Relativo ao primeiro vetor
    if(!(vetor_st = malloc(atoi(argv[1]) *sizeof(int)))){
        printf("\nErro, memória insuficiente\n");
        exit(-1);
    }

    FillArrayInt(vetor_st, atoi(argv[1]), MX);

    printf("\nVetor 1: ");
    PrintArrayInt(vetor_st, atoi(argv[1]));

    //Relativo ao segundo vetor
    if(!(vetor_nd = malloc(atoi(argv[2]) *sizeof(int)))){
        printf("\nErro, memória insuficiente\n");
        exit(-1);
    }

    FillArrayInt(vetor_nd, atoi(argv[2]), MX);

    printf("\nVetor 2: ");
    PrintArrayInt(vetor_nd, atoi(argv[2]));

    //Relativo ao vetor interceção
    for(int i = 0; i <= atoi(argv[1]); i++){
        for(int j = 0; j <= atoi(argv[2]); j++){
            if(*(vetor_st +i) == *(vetor_nd +j)){
                cont++;
            }
        }
    }

    if(!(inter = malloc(cont *sizeof(int)))){
        printf("\nErro, memória insuficiente\n");
        exit(-1);
    }

    cont = 0;
    for(int i = 0; i < atoi(argv[1]); i++){
        for(int j = 0; j < atoi(argv[2]); j++){
            if(*(vetor_st +i) == *(vetor_nd +j)){
                *(inter +cont) = *(vetor_st +i);
                cont++;
            }
        }
    }
    //Vetor intereceção sem repetição
    if(!(rpt = malloc(cont *sizeof(int)))){
        printf("\nErro, memória insuficiente\n");
        exit(-1);
    }
    if(cont > 1){
        for(int i = 0; i < cont; i++){
            if(*(inter +i) != *(inter +i +1)){
                *(rpt +temp) = *(inter +i);
                temp++;
            }
        }
    }

    printf("\nVetor interceção: ");
    if(!temp)
        printf("Não há interceção\n");
    else 
        PrintArrayInt(rpt, temp);
    
    PrintArrayInt(inter, cont);

    free(vetor_st);
    free(vetor_nd);
    free(inter);
    free(rpt);

    return 0;
}

void PrintArrayInt(int *array, int size){
    for(int i = 0; i < size; i++){
        if(!i)
            printf(" |");
        printf(" %d ",*(array +i));

        if(i == size -1)
            printf("|\n");  
    }
}

void FillArrayInt(int *array, int size, int max){
    for(int i = 0; i < size; i++){
        *(array +i) = rand() %max;
    }
}
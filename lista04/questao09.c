#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10
#define MX 100

int main(){
    int *vetor = NULL, trans;
    srand(time(NULL));

    vetor = malloc(TAM *sizeof(int));

    for (int i = 0; i <= TAM; i++){
        *(vetor +i) = rand() %MX;
    }

    //Imprime o vetor
    for (int i = 0; i <= TAM; i++){
        if (!i)
            printf("| %d", *(vetor +i));
        if(i == TAM)
            printf("|");
        else
            printf(", %d", *(vetor +i));
    }

    //Organiza o vetor
    for (int i = 0; i < TAM; i++){
        if (*(vetor +i) > *(vetor +i +1)){
            trans = *(vetor +i);
            *(vetor +i) = *(vetor +i +1);
            *(vetor +i +1) = trans;
        }
    }

    for (int i = 0; i <= TAM; i++){
        if (!i)
            printf("| %d", *(vetor +i));
        if(i == TAM)
            printf("|");
        else
            printf(", %d", *(vetor +i));
    }
    return 0;
}
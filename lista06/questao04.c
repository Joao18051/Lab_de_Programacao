#include <stdio.h>

#define QTD 3
#define NTS 2

struct Aluno
{
    int notas[2];
    float media;
};


int main(){
    struct Aluno dados[QTD];
    char lixo;

    for(int i = 0; i <QTD; i++){
        dados[i].media = 0;
        for(int j = 0; j <NTS; j++){
            printf("\nInforme a %d nota do %d aluno: ", j +1, i +1);
            scanf("%d", &dados[i].notas[j]);

            dados[i].media += dados[i].notas[j];
        }

        dados[i].media = dados[i].media /NTS;
    }

    for(int i = 0; i <QTD; i++){
        printf("\nA média do aluno %d é: %.1f", i +1, dados[i].media);
    }

    return 0;
}
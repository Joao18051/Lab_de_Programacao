#include <stdio.h>
#include <stdlib.h>

struct Media{
    float equi;
};

struct Aluno{
    int nota[2];
    struct Media *p_med;
};

int main(int argc, char *argv[]){
    struct Aluno al;
    struct Media med;

    al.p_med = &med;

    if(argc != 3){
        printf("\nError.\n\t\tUse: %s <Nota1> <Nota2>\n", argv[0]);
        exit(-1);
    }

    al.nota[0] = atoi(argv[1]);
    al.nota[1] = atoi(argv[2]);

    al.p_med->equi = 0;
    al.p_med->equi += al.nota[0];
    al.p_med->equi += al.nota[1];
    al.p_med->equi = al.p_med->equi /2;

    printf("\nNota 1: %d", al.nota[0]);
    printf("\nNota 2: %d\n", al.nota[1]);
    printf("\nMedia: %.1f", al.p_med->equi);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Professor{
    char *nome;
};

struct Diciplina{
    int nota;
    struct Professor *prox;
};

int main(){
    struct Professor prof;
    struct Diciplina dis;

    dis.prox = &prof;

    dis.prox->nome = malloc(8 *sizeof(char));
    prof.nome = "Nome";

    printf("%s", dis.prox->nome);

    return 0;
}
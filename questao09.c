#include <stdio.h>

int main(){
    int num;
    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    printf("Seu sucessor é %d e seu antecessor é %d", num +1, num -1);

    return 0;
}
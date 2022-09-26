#include <stdio.h>

int main(){
    int altura_a, altura_b, crescimento_ano_a, crescimento_ano_b, anos = 0;
    char lixo;

    puts("\nVerificador de quanto tempo é necessário para b passar a\n");
    puts("--------------------------------------------------------\n");

    puts("Informe o valor de a: ");
    scanf("%d", &altura_a);
    scanf("%c", &lixo);

    puts("\nInforme a taxa de crescimento de a, em anos: ");
    scanf("%d", &crescimento_ano_a);
    scanf("%c", &lixo);

    puts("\nInforme o valor de b: ");
    scanf("%d", &altura_b);
    scanf("%c", &lixo);

    puts("\nInforme a taxa de crescimento de b, em anos: ");
    scanf("%d", &crescimento_ano_b);
    scanf("%c", &lixo);


    if(crescimento_ano_b > crescimento_ano_a){
        while(altura_a >= altura_b){
            altura_a += crescimento_ano_a;
            altura_b += crescimento_ano_b;
            anos++;
        }
        printf("a ultrapassará b em %d anos\n", anos);
    } else {
        puts("\nPor ter uma taxa de crescimento menor, b nunca ultrapassará a");
    }

    return 0;
}
#include <stdio.h>

int main(){
    int num, pot, prod, pot_d_2;
    char lixo;

    puts("Informe um número: ");
    scanf("%d", &num);
    scanf("%c", &lixo);

    puts("Informe um número para potencia de 2: ");
    scanf("%d", &pot);
    scanf("%c", &lixo);

    if(!pot){
        prod = num;
    } else {
        pot_d_2 = 2 << (pot -1);
        prod = num *(pot_d_2);
    }

    printf("%d x 2^%d = %d", num, pot, prod);

    return 0;
}
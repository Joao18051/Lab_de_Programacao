#include <stdio.h>
#define SAL 50.25

int main(){
    int dias;
    float s_bruto, s_liquido;

    puts("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    if(dias <= 10){
        s_bruto = dias *SAL;
    } else if(dias <= 20) {
        s_bruto = (dias *SAL) +0.2 *(dias *SAL);
    } else {
        s_bruto = (dias *SAL) +0.3 *(dias *SAL);
    }

    s_liquido = s_bruto -(0.1 *s_bruto);

    printf("O salário líquido a ser recebido é de R$%.2f", s_liquido);

    return 0;
}
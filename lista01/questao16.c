#include <stdio.h>

int main(){
    float valor_hora_aula, trabalho_hora_mes, inss, s_bruto, s_liquido;
    char lixo;

    puts("Informe o valor da hora aula: ");
    scanf("%f", &valor_hora_aula);
    scanf("%c", &lixo);

    puts("Informe a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &trabalho_hora_mes);
    scanf("%c", &lixo);

    puts("Informe o percentual de desconto do INSS, em porcentagem: ");
    scanf("%f", &inss);
    scanf("%c", &lixo);

    s_bruto = valor_hora_aula *trabalho_hora_mes;
    s_liquido = s_bruto -(s_bruto *(inss /100));

    printf("O salário bruto é de R$%.2f\n", s_bruto);
    printf("O salário líquido é de R$%.2f\n", s_liquido);

    return 0;
}
#include <stdio.h>

int main(){
    int num_atual, maior_num, menor_num, contador = 0;
    char cond_de_parada, lixo;

    do {
        puts("Informe um número: ");
        scanf("%d", &num_atual);
        scanf("%c", &lixo);

        if(!contador){
            maior_num = num_atual;
            menor_num = num_atual;
        }

        maior_num = (maior_num < num_atual)? num_atual : maior_num;
        menor_num = (menor_num > num_atual)? num_atual : menor_num;

        contador++;
        printf("\nDos %d número informados, o maior número informado é: %d\nO menor número informado é: %d\n", contador, maior_num, menor_num);

        puts("\nDigite '0' se quiser parar, qualquer outra tecla para adicionar mais números\n");
        scanf("%c", &cond_de_parada);
        scanf("%c", &lixo);
        
    } while(cond_de_parada != 48);

    return 0;
}
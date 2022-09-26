#include <stdio.h>

int main(){
    int dia;
    char lixo, parada;

    do{
        puts("Informe um número que represente um dia da semana: ");
        scanf("%d", &dia);
        scanf("%c", &lixo);
        
        switch (dia)
        {
        case 1:
            puts("\nDomingo\n");
            break;
        
        case 2:
            puts("\nSegunda\n");
            break;
        
        case 3:
            puts("\nTerça\n");
            break;

        case 4:
            puts("\nQuarta\n");
            break;
        
        case 5:
            puts("\nQuinta\n");
            break;
        
        case 6:
            puts("\nSexta\n");
            break;
        
        case 7:
            puts("\nSábado\n");
            break;

        default:
            puts("\nValor inválido!\n");
            break;
        }

        puts("Digite '0' para sair, qualquer outra tecla para repetir: ");
        scanf("%c", &parada);
        scanf("%c", &lixo);

    } while (parada != 48);

    return 0;
}
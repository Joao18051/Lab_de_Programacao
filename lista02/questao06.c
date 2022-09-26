#include <stdio.h>

int main(){
    int voto, paulo, renata, nulo;
    char lixo, confirmacao;

    do {
        do {
            puts("Informe o número do candidato: ");
            scanf("%d", &voto);
            scanf("%c", &lixo);

            if(voto >= 0){
                switch (voto)
                {
                case 5:
                    printf("\nDeseja confirmar seu voto em PAULO?");
                    break;

                case 7:
                    printf("\nDeseja confirmar seu voto em RENATA?");
                    break;
                
                default:
                    printf("\nDeseja confirmar seu voto NULO?");
                    break;
                }
            } else
                break;

            printf("\nDigite 'c' para confirmar ou 'n' para negar: ");
            scanf("%c", &confirmacao);
            scanf("%c", &lixo);
        } while (confirmacao != 99);
        
        switch (voto)
        {
        case 5:
            paulo++;
            break;

        case 7:
            renata++;
            break;
        
        default:
            nulo++;
            break;
        }

    } while (voto >= 0);

    printf("%d", paulo);
    voto = paulo + renata + nulo;
    paulo = (float)paulo /voto;
    renata = (float)renata /voto;
    nulo = (float)nulo /voto;

    printf("\n-----RESULTADO DAS ELEIÇÕES-----");
    printf("\nCadidato PAULO teve %.2f%% dos votos;", paulo *100);
    printf("\nCadidato RENATA teve %.2f%% dos votos;", renata *100);
    printf("\n%.2f%% dos votos foram nulos;", nulo *100);

    printf("\n%s", (renata > paulo)? "O candidato vencedor foi RENATA" : "O candidato vencedor foi FABIO");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned char menu, armarios = 0, armario_antigo, liberar, lixo, aleatorio, contador;

    do{ 
        printf("\n");
        puts("--------------------------");
        contador = 1;

        for (int i = 1; i <= 128; i = i <<1)
        {
            printf("Armário %d: %s\n", contador, (i & armarios)? "Ocupado" : "Livre");
            contador++;
        }
        
        puts("\nEscolha uma opção: ");
        printf("\n1.Ocupar armário");
        printf("\n2.Liberar armário");
        printf("\n3.Sair\n");

        scanf("%c", &menu);
        scanf("%c", &lixo);

        switch (menu)
        {
        case 49:
            if(armarios != 255){
                armario_antigo = armarios;
                srand(time(NULL));

                do{
                    aleatorio = rand() %8;
                    aleatorio = 1 <<aleatorio;
                    armarios = aleatorio |armarios;

                } while (armarios == armario_antigo);
            } else
                printf("\nTodos os armários estão ocupados");
            
            break;
        
        case 50:
            printf("\nInforme qual armário deseja liberar: ");
            scanf("%d", &liberar);
            scanf("%c", &lixo);
            
            liberar = 1 << liberar -1;

            if (!(armarios &liberar))
                printf("\nEste armário já está livre\n");
            else
                armarios = armarios ^liberar;

            break;
        
        default:
            break;
        }

        puts("--------------------------");

    } while (menu != 51);
    
    return 0;
}
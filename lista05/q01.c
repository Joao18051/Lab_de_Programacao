#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc != 4){
        printf("\nErro.\nUse:\n\t\t%s <Numero> <Numero2> <Operacao>", argv[0]);
        exit(-1);
    }

    int num1, num2;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    switch (atoi(argv[3]))
    {
    case 0:
        printf("\n%d + %d = %d\n\n", num1, num2, num1 +num2);
        break;
    
    case 1:
        printf("\n%d - %d = %d\n\n", num1, num2, num1 -num2);
        break;
    
    case 2:
        printf("\n%d x %d = %d\n\n", num1, num2, num1 *num2);
        break;
    
    case 3:
        printf("\n%d / %d = %.2f\n\n", num1, num2, (float)num1 /num2);
        break;
    
    default:
        printf("Operação inválida");
        break;
    }
    return 0;
}
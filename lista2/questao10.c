#include <stdio.h>

int main(){
    puts("Quadrado dos números inteiros múltiplos de 4 entre 15 e 90: ");
    for (int i = 15; i <= 90; i++)
    {
        if(!(i %4))
            printf("%d ", i *i);
    }
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    int pot;

    for (int i = 0; i <= 7; i++)
    {
        pot = pow(3, i);
        printf("3^ %d = %d\n", i, pot);
    }
    
    return 0;
}
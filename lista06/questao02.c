#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Estoque{
    char peca[80];
    int num, pedido;
    float preco;

    struct Estoque *next;
};

void NewStruct(struct Estoque *);
void PrintStruct(struct Estoque *, int);

int main(){
    struct Estoque Est;
    unsigned char menu = 0, cont = 0;

    while(1){
        printf("\n-----------------------------\n");
        printf("          Menu");
        printf("\n-----------------------------");

        printf("\n1.Adicionar novo produto");
        printf("\n2.Sair");

        printf("\n\nOpção selecionada: ");
        scanf("%c", &menu);

        if(menu == 0x31){
            struct Estoque *New_Est;

            if(cont){
                NewStruct(&Est);
                New_Est = New_Est-> next;
            } else
                New_Est = &Est;
                
            printf("\nInforme o nome da peça: ");
            scanf("%s", New_Est-> peca);

            printf("Informe o número da peça: ");
            scanf("%d", New_Est-> num);

            printf("Informe o preço da peça: ");
            scanf("%f", New_Est-> preco);

            printf("Informe o número do pedido: ");
            scanf("%d", New_Est-> pedido); 

            cont++; 

        } else if(menu == 0x32)   
            break;

        if(cont)
            PrintStruct(&Est, cont+1);
    }
    
    return 0;
}

void NewStruct(struct Estoque *new){
    struct Estoque *next;
    next = malloc(sizeof(struct Estoque));
}

void PrintStruct(struct Estoque *Est, int quant){
	struct Estoque *i;
    int cont = 1;
	
	for (i = Est; cont < quant; i = i-> next){
        printf("\n-----------------------------\n");
        printf("Produto %d", cont);

        printf("\nNome da peça: %s", i-> peca);

        printf("\nNúmero da peça: %d", i-> num);

        printf("\nPreço da peça: %.2f", i-> preco);

        printf("\nNúmero do pedido: %d", i-> pedido);
        printf("\n-----------------------------");

        cont++;
	}

}
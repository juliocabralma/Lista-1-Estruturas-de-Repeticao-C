#include <stdio.h>
#include <stdlib.h>


int main (){
    float pesoCaixa, pesoTotal;

    pesoTotal = 0;
    
    int i = 1;
    while(i<=25){
    printf ("Insira o peso da caixa %d: ", i);
    scanf("%f", &pesoCaixa);
    pesoTotal = pesoTotal+pesoCaixa;
    printf("\n");
    i++;
    }

    printf("\n");
    printf ("O peso total eh: %.1f", pesoTotal);
    printf("\n");

    
}

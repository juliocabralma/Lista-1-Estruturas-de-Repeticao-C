#include <stdio.h>
#include <stdlib.h>


int main (){
    int quantidade;
    float preco, totalGastos;

    totalGastos = 0;
    
    int i = 1;
    while(i<=45){
      printf ("Insira a quantidade do produto %d: ", i);
      scanf("%d", &quantidade);
      printf("\n");
      printf ("Insira o preco do produto %d: ", i);
      scanf("%f", &preco);
      printf("\n");
      totalGastos += quantidade*preco; 
      i++;
    }

    printf("\n");
    printf ("O preco total eh: %.1f", totalGastos);
    printf("\n");
}

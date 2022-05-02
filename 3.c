#include <stdio.h>
#include <stdlib.h>


int main (){
    int quantidadeHoras, quantidadeHorasTotal;

    quantidadeHorasTotal = 0;
    
    int i = 1;
    while(i<=30){
      printf ("Insira a quantidade de horas trabalhadas no dia %d: ", i);
      scanf("%d", &quantidadeHoras);
      printf("\n");
      quantidadeHorasTotal += quantidadeHoras; 
      i++;
    }

    printf("\n");
    printf ("A quantidade total de horas trabalhadas no mes eh: %d", quantidadeHorasTotal);
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>


int main (){
    int quantidadeHoras, quantidadeHorasTotal;
    float salarioBruto=0;

    quantidadeHorasTotal = 0;
    
    int i = 1;
    while(i<=30){
      printf ("Insira a quantidade de horas trabalhadas no dia %d: ", i);
      scanf("%d", &quantidadeHoras);
      printf("\n");
      quantidadeHorasTotal += quantidadeHoras; 
      i++;
    }

    salarioBruto = quantidadeHorasTotal*10;
  
    printf("\n");
    printf ("O salario bruto do funcionario eh: %.1f", salarioBruto);
    printf("\n");
}

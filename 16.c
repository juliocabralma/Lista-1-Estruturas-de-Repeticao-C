#include <stdio.h>
#include <stdlib.h>


int main (){
    int horaentrada, minutoEntrada, horaSaida, minutoSaida, transformaEntradaMinutos, transformaSaidaMinutos, resultado, valor;
  
    
      printf("Digite a hora de entrada: ");
      scanf("%d", &horaentrada);
      printf("\n");
      printf("Digite o minuto de entrada: ");
      scanf("%d", &minutoEntrada);
      printf("\n");
      printf("Digite a hora de saida: ");
      scanf("%d", &horaSaida);
      printf("\n");
      printf("Digite o minuto de saida: ");
      scanf("%d", &minutoSaida);
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");

  
      transformaEntradaMinutos = (horaentrada*60)+minutoEntrada;
      transformaSaidaMinutos = (horaSaida*60)+minutoSaida;

      resultado = transformaSaidaMinutos-transformaEntradaMinutos;

      if(resultado/60==1){
        printf("O valor a pagar eh 4 reais \n");  
      }
      else if(resultado/120==1){
        printf("O valor a pagar eh 6 reais \n");  
      }
      else{
        if(resultado%60==0){
          resultado = resultado/60;
          resultado = resultado-2;
          valor = 6;
          valor = valor+resultado;
          printf("O valor a pagar eh %d \n", valor);  
        }
      }

  
   
}

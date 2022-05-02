#include <stdio.h>
#include <stdlib.h>


int main (){
    int numeros, somaPares=0;
    int i=0;  
    while(i<10){
      printf("Digite um numero inteiro e positivo: ");
      scanf("%d", &numeros);
      printf("\n");
      if(numeros%2==0 && numeros>4){
        somaPares+=numeros;
      }
      i++;
    } 
  
    printf("\n");
    printf("\n");
    printf("A soma dos numeros pares e maiores que 4 eh %d", somaPares);
}

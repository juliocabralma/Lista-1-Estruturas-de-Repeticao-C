#include <stdio.h>
#include <stdlib.h>


int main (){
    int numero=1;
  
    while(numero>0 && numero!=1000){
      printf("Digite um numero: ");
      scanf("%d", &numero);
      printf("\n");
      if(numero>0 && numero!=1000){
        if(numero%2==0){
          printf("\n");
          printf("O numero %d eh par \n", numero); 
          printf("\n");
        }
        else{
          printf("\n");
          printf("O numero %d eh impar \n", numero); 
          printf("\n");
        }
      }
    }  
}

#include <stdio.h>
#include <stdlib.h>


int main (){
    int numeros=0, quantidade=0, soma=0;
    float media=0;
    
     while(numeros>=0){
      printf("Digite um numero inteiro e positivo: ");
      scanf("%d", &numeros);
      printf("\n");
      printf("\n");
      if(numeros>=0){
        soma+=numeros;
        quantidade++;
      }   
    } 
    media = (float)soma/quantidade;

    printf("\n");
    printf("A soma dos numeros eh %d e a media dos numeros eh %.2f", soma, media);
}

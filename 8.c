#include <stdio.h>
#include <stdlib.h>


int main (){
    int idade=1, quantidade=0, altura, somaAltura=0;
    float media=0;
    
    while(idade>0){
      printf("Insira a sua idade: ");
      scanf("%d", &idade);
      printf("\n");
      printf("Insira a sua altura (em centimetros): ");
      scanf("%d", &altura);
      printf("\n");
      if(idade>50){
        somaAltura+=altura;
        quantidade++;
      }   
    }
  
    media = (float)somaAltura/quantidade;

    printf("\n");
    printf("A media das Alturas eh %.2f", media);
}

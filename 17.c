#include <stdio.h>
#include <stdlib.h>


int main (){
    char estado;
    int casado=0, solteiro=0, viuvo=0, desquitado=0, idade, somaIdade=0;
    float mediaIdade=0, porcentagemSeparados;
    
     
      int i = 1;
      while(i<=20){
        printf("Digite C - casado, S - solteiro, V - viúvo e D – desquitado ou separado)");
        printf("\n");
        printf("\n");
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("\n");
        printf("\n");
        printf("Digite o estado civil da pessoa %d: ", i);
        scanf(" %c", &estado);
        printf("\n");
        printf("\n");

        if(estado=='C'){
          casado++;
        }
        else if(estado=='S'){
          solteiro++;
        }
        else if(estado=='V'){
          somaIdade+=idade;
          viuvo++;
        }
        else if(estado=='D'){
          desquitado++;
        } 
        i++;
      }

      mediaIdade = (float)somaIdade/viuvo;

      porcentagemSeparados = (float)(desquitado*100)/20;

      printf("Quantidade de pessoas Casadas: %d \n", casado);
      printf("Quantidade de pessoas Solteiras: %d \n", solteiro);
      printf("A media da Idade pessoas Viuvas: %.2f \n", mediaIdade);
      printf("A porcentagem de pessoas Desquitadas em relacao ao total: %.2f \n",porcentagemSeparados);
    

  
    
  
   
}

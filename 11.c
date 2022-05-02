#include <stdio.h>
#include <stdlib.h>


int main (){
    int idade, altura, alturaPessoas10e20=0, quantPessoas50=0, quantPessoas10e20=0, quantPessoasPesoMenor40=0;
    float peso, mediaAltura, porcentagemPessoasMenos40;

    int i = 1;
    while(i<=15){
      printf("Digite a idade da pessoa %d: ", i);
      scanf("%d", &idade);
      printf("\n");
      printf("Digite a Altura (em centimetros) da pessoa %d: ", i);
      scanf("%d", &altura);
      printf("\n");
      printf("Digite o peso (em kg) da pessoa %d: ", i);
      scanf("%f", &peso);
      printf("\n");

      if(idade>50){
        quantPessoas50++;  
      }

      if(idade>=10 && idade<=20){
        quantPessoas10e20++;
        alturaPessoas10e20+=altura;
      }

      if(peso<40){
        quantPessoasPesoMenor40++;
      }
      
      i++;
    }

    
    mediaAltura = (float)alturaPessoas10e20/quantPessoas10e20;

    porcentagemPessoasMenos40 = (float)(quantPessoasPesoMenor40*100)/15;

  printf("\n");
  printf("\n");

  printf("Quantidade de pessoas com idade superior a 50 anos: %d \n", quantPessoas50);
  printf("\n");
  printf("A média das alturas das pessoas com idade entre 10 e 20 anos: %.2f \n", mediaAltura);
  printf("\n");
  printf("A porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas: %.2f%% \n", porcentagemPessoasMenos40);
}

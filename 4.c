#include <stdio.h>
#include <stdlib.h>


int main (){
    int idade, quantidadePessoasMaiores;

    quantidadePessoasMaiores = 0;
    
    int i = 1;
    while(i<=10){
      printf ("Insira a idade da pessoa %d: ", i);
      scanf("%d", &idade);
      printf("\n");
      if(idade>=18){
        quantidadePessoasMaiores++;
      }
      printf("\n");
      i++;
    }

    printf("\n");
    printf ("A quantidade pessoas maiores de 18 anos eh: %d", quantidadePessoasMaiores);
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>


int main (){
    float salario=1, novoSalario, reajuste, reajusteTotal=0;
  
    while(salario>0){
      printf("Digite o seu salario: ");
      scanf("%f", &salario);
      printf("\n");
      printf("\n");

      if(salario>0){
        if(salario<500){
          reajuste = 0.15*salario;
          novoSalario = salario+reajuste;
        }
        if(salario>=500 && salario<=1000){
          reajuste = 0.10*salario;
          novoSalario = salario+reajuste;  
        }
        if(salario>1000){
          reajuste = 0.05*salario;
          novoSalario = salario+reajuste;  
        }

        reajusteTotal+=reajuste;
        printf("\n");
        printf("\n");
        printf("O novo salario do funcionario eh: %.2f\n", novoSalario);
        printf("\n");
        printf("\n");
      }
    } 

    printf("\n");
    printf("\n");
    printf("A empresa gastara %.2f com todos os reajustes de salario", reajusteTotal);
}

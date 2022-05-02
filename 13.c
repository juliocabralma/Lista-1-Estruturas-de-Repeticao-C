#include <stdio.h>
#include <stdlib.h>


int main (){
    int horasTrabalhadas, opcao=1;
    float valorHorasTrabalhadas, salarioBruto, inss, impostoRenda, salarioLiquido;
  
    while(opcao==1){
      printf("Digite a quantidade de horas trabalhadas: ");
      scanf("%d", &horasTrabalhadas);
      printf("\n");
      printf("\n");
      printf("Digite o valor da hora trabalhada: ");
      scanf("%f", &valorHorasTrabalhadas);
      printf("\n");

      salarioBruto = horasTrabalhadas*valorHorasTrabalhadas;

      inss = 0.11*salarioBruto;
        
      salarioLiquido = salarioBruto - inss;

      if(salarioBruto>=900 && salarioBruto<=1800){
        salarioLiquido = salarioLiquido-135;
      }
      if(salarioBruto>1800){
        salarioLiquido = salarioLiquido-360;
      }

      printf("\n");
      printf("O salario Liquido do Funcionario eh %.2f: ", salarioLiquido);
      printf("\n");
      printf("\n");

      printf("Deseja inserir outro funcionario? Digite 1 para sim e qualquer outro numero para nao, Escolha a opcao: ");
      scanf("%d", &opcao);
      printf("\n");
      printf("\n");  
    } 
}

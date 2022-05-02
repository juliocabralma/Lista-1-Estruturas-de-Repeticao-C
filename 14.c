#include <stdio.h>
#include <stdlib.h>


int main (){
    int quantidadeProduto, opcao=1;
    float precoEtiqueta, valorCompraAtual, desconto, valorCompraTotal=0;
  
    while(opcao==1){
      printf("Digite o preco da etiqueta do produto: ");
      scanf("%f", &precoEtiqueta);
      printf("\n");
      printf("Digite a quantidade do Produto escolhido: ");
      scanf("%d", &quantidadeProduto);
      printf("\n");
      printf("\n");

      valorCompraAtual = precoEtiqueta*quantidadeProduto;
      valorCompraTotal+= valorCompraAtual;

      printf("Deseja encerrar a compra?\n");
      printf("Digite 1 para continuar comprando e qualquer outro numero para encerrar\n");
      printf("Insira a opcao: ");
      scanf("%d", &opcao);
      printf("\n");
      printf("\n");  
    } 

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Opcoes de Pagamento\n");
    printf("\n");
    printf("Digite 1 para A vista em dinheiro ou cheque, com 10%% de desconto\n");
    printf("\n");
    printf("Digite 2 para A vista com cartao de credito, com 5%% de desconto\n");
    printf("\n");
    printf("Digite 3 para Em 2 vezes, preco normal de etiqueta sem juros\n");
    printf("\n");
    printf("Digite 4 para Em 3 vezes, preco de etiqueta com acrescimo de 10%%\n");
    printf("\n");
    printf("\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    printf("\n");
    printf("\n");

    if(opcao==1){
      desconto = valorCompraTotal*0.1;
      valorCompraTotal = valorCompraTotal-desconto;
      printf("O valor da compra sai por: %.2f", valorCompraTotal); 
    }
    if(opcao==2){
      desconto = valorCompraTotal*0.05;
      valorCompraTotal = valorCompraTotal-desconto;
      printf("O valor da compra sai por: %.2f", valorCompraTotal); 
    }
    if(opcao==3){
      valorCompraTotal = valorCompraTotal/2;
      printf("O valor da compra sai por 2 parcelas de: %.2f", valorCompraTotal);  
    }
    if(opcao==4){
      desconto = valorCompraTotal*0.1;
      valorCompraTotal = valorCompraTotal+desconto;
      valorCompraTotal = valorCompraTotal/3;
      printf("O valor da compra sai por 3 parcelas de: %.2f", valorCompraTotal);  
    }
}

#include <stdio.h>
#include <stdlib.h>


int main (){
    float base, altura, area;

    printf("Digite a Base do triangulo: ");
    scanf("%f", &base);
    printf("\n");
    printf("Digite a Altura do triangulo: ");
    scanf("%f", &altura);
    printf("\n");
    if(base>0 && altura>0){
      area = (base*altura)/2;
      printf("A Area do Triangulo eh %.2f", area);
    }
    else{
      printf("Medida invalida, digite valores maiores que 0");
    }
}

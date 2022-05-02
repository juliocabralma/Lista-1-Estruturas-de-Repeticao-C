#include <stdio.h>
#include <stdlib.h>


int main (){
    float temperaturaCelsius, mediaTemperatura;
    
    int i = 1;
    while(i<=50){
      temperaturaCelsius = (0.55555555555555555555555555555556)*(i-32);  
      mediaTemperatura = (i+temperaturaCelsius)/2;
      printf ("A temperatura %d em Fahrenheit corresponde a %.1f°C, a media entre as duas temperaturas eh: %.1f", i, temperaturaCelsius, mediaTemperatura);
      printf("\n");          
      printf("\n");         
      i++;
    }    
}

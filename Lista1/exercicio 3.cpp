#include<stdio.h>
#include<locale.h>

int main(){
	 float tsaida,tensaodeentrada, r1, r2 , r3;
	 
	 printf("informe a resistencia 1:");
	 scanf("%f", &r1);
	 printf("informe a resistencia 2:");
	 scanf("%f", &r2);
	printf("informe a tesnao de entrada :");
	 scanf("%f", &tensaodeentrada);
	 
	 tsaida = tensaodeentrada*(r2/r1+r2);
	 
	 printf("a potencia e de %f", tsaida);
	 
	
	
	
	
	
	
	
return 0;	
}

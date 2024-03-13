#include<stdio.h>
#include<locale.h>

int main(){
	 float tentrada, tsaida, r1,r2 ;
	 
	 printf("informe a r1:");
	 scanf("%f", &r1);
	 printf("informe a resistencia 2:");
	 scanf("%f", &r2);
	 printf("informe a tensao de entrada :");
	 scanf("%f", &tentrada);
	 tsaida = tentrada*(r2/(r1+r2)) ;
	 
	 printf("a tensao de saida e", tsaida);
	 
	
	
	
	
	
	
	
return 0;	
}

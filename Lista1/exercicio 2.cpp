#include<stdio.h>
#include<locale.h>

int main(){
	 float resistencia , i , p ;
	 
	 printf("informe a resistencia 1:");
	 scanf("%f", &resistencia);
	  printf("informe a corrente :");
	 scanf("%f", &i);
	 
	 p = resistencia * i * i;
	 
	 printf("a potencia e de %f", p);
	 
	
	
	
	
	
	
	
return 0;	
}

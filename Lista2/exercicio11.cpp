#include <stdio.h>

int main(){
	int V;
	
	printf("Deteccao de Fase ou Neutro\n");
	printf("Descricao: Determine se um fio � fase ou neutro com base na tensao medida.\n");
	printf("Fio e considerado neutro se a tens�o medida for entre 0V a 70v e fase se der a tencao nominal (127 ou 220).\n\n");
	scanf("%d", &V);
	
printf("\n");

if (V>=0 , V<=70){
	printf("Deteccao do NEUTRO");
}
else{
printf("deteccao da FASE");
}

	return 0;
}

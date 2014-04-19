//calculo da área do quadrado
#include <stdio.h>
int main(){
	float L;
	printf("Qual tamanho do Lado do quadrado: ");
	scanf("%f",&L);
	L = L*L;
	printf("\nArea: %.3f\n",L);
	printf("\n%.3f\n",L+L);
	return(0);
}

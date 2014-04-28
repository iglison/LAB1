/* Somando dez valores */

#include <stdio.h>
int main(){
	int i, x,
		k=0;
	
	printf("DIGITE DEZ VALORES INTEIROS POSITIVOS: \n");
	for(i=0;i<10;i++){
		scanf("%d",&x);
		k+=x;
	}
	printf("Soma dos valores digitados eh: %d \n\n",k);
	return(0);
}

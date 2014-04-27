/* Ler vários numeros e sai com número negativo. 
 * Mostra maior e menor numero digitado */
#include <stdio.h>
int main(){
	int x,
		maior=0,
		menor=0;
	
	do{
		scanf("%d",&x);
		if (x > maior)
			maior = x;
		if ((x < menor || menor == 0) && (x > -1))
			menor = x;
	}while(x > -1);
	
	printf("Maior numero: %d\n",maior);
	printf("Menor numero: %d\n",menor);
	return(0);
}	

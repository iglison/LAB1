/* Vários números e vários calculos */
#include <stdio.h>

int main(){
	int valor,K,
		c=0, maior=0, menor, soma=0, p=0, pares=0;
	
	do{
		scanf("%d",&valor);
		K=valor;
		soma+=valor;
		c++;
		
		if(valor > maior)
			maior = valor;
		if((K < menor) && (K!=0))
			menor = K;

		if(valor%2==0){
			pares+=valor;
			p++;
		}
	}while(valor!=0);
	
	printf("\nSoma dos n%cmeros: %d \n",-93,soma);
	printf("Quantidade de n%cmeros: %d \n",-93,c-1);
	printf("M%cdia dos n%cmeros digitados: %.1f \n",-126,-93,(float)(soma/(c-1)));
	printf("Maior n%cmero digitado: %d \n",-93,maior);
	printf("Menor n%cmero digitado: %d \n",-93,menor);
	printf("M%cdia dos n%cmeros pares: %.1f \n\n",-126,-93,(float)(pares/(p-1)));
	return(0);
}


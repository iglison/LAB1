/* Números positivos e seus divisores */

#include <stdio.h>
int main(){
	int num, i;
	
	printf("Digite um numero positivo: ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++){
		if(num%i == 0){
			printf(" %d ",i);
		}
	}
	printf("\n\n");
	return(0);
}

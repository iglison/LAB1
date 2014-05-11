/* Ler vetor de 10 posições, quantos valores pares possui */

#include <stdio.h>
int main(){
	int i, num[10], cont=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		if(num[i]%2 == 0){
			cont++;
		}
	}
	printf("\n %d Valores pares \n\n",cont);
	return(0);
}


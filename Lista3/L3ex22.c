/* Ler vetor de 10 posições, 0 em todos os valores negativos */

#include <stdio.h>
//#include <stdlib.h>

int main(){
	int i, num[10];
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	//system("cls || clear");
	printf("\n");
	for(i=0;i<10;i++){
		if(num[i] < 0)
			num[i] = 0;
	}
	for(i=0;i<10;i++){
		printf(" %d ",num[i]);
	}
	return(0);
}

/* armazena em vetor 10 inteiros, mostra vetor, mostra maior numero e sua posição */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, num[10], 
		G=0,
		pos=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	system("cls || clear");
	printf("\n");
	for(i=0;i<10;i++){
		printf(" %d ",num[i]);
		if(num[i] > G){
			G = num[i];
			pos = i;
		}
	}
	printf("\n\n Maior valor = %d  posi%c%co = %d",G,-121,-58,pos+1);
	printf("\n\n");
	return(0);
}

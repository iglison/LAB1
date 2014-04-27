/* Ler um número(N) e imprime N números naturais impares */
#include <stdio.h>
int main(){
	int i,
		n;
	
	scanf("%d",&n);
	for(i=1;i<=n*2;i++){
		printf("%d ",i++);
	}
	printf("\n\n");
	return(0);
	
}

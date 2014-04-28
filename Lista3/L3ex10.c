/* Contando números 1's que aparecem em uma sequencia de números */

#include <stdio.h>
#define tam 100

int main(){
	int i, cont=0;
	char k[tam];
	
	scanf("%s", k);
	
	for(i=0;i<tam;i++){
		//contar quantos 1's aparecem
		if(k[i]=='1')
			cont++;
	}
	printf("\nAPARECEM: %d  1's\n\n",cont);
	return(0);
}


/* Soma dos 50 primeiros numeros pares */
#include <stdio.h>
int main(){
	int i,
		soma=0;
	
	for(i=0;i<51;i++){
		if(i%2==0){
			soma+=i;
		}
	}
	printf("\n%d \n\n",soma);
	return(0);
}

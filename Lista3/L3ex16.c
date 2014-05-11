/* Somar valores PAR da sequência FIBONACCI até 4 000 000 (milhões) */

#include <stdio.h>

int fibonacci();

int main(){
	int i, 
		soma=0,
		num=4000000;
	
	for(i=0;fibonacci(i)<=num;i++){
		if(fibonacci(i)%2==0)
			soma+=fibonacci(i);
	}
	printf("\n Total da soma = %d \n",soma);
	printf("\n\n");
	return(0);
}

int fibonacci(int x){
	if(x == 0){ //base1
		return(0);
	}else if(x == 1){ //base2
		return(1); 
	}else{
		//passo recursivo
		return(fibonacci(x-1) + fibonacci(x-2));
	}
}

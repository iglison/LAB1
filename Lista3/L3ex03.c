//* Fibonacci *//
#include <stdio.h>

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

int main(){
	int k,
		i;
	
	scanf("%d",&k);
	printf("\n");
	for(i=0;fibonacci(i) < k;i++){
		printf("%d ",fibonacci(i));
	}
	printf("%d \n\n",fibonacci(i));
	return(0);
}

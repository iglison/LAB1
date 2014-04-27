/* Verificar se o número é primo */
#include <stdio.h>
int main(){
	int n,i,
		c=0;
	
	printf("Digite um numero inteiro maior que 1: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	
	if(c==2){
		printf("Este n%cmero %c primo! \n\n",-93,-126);
	}else{
		printf("Este n%cmero n%co %c primo! \n\n",-93,-58,-126);
	}
	
	return(0);
}

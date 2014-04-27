/* Escrevendo de um até 100 */
#include <stdio.h>
int main(){
	int i,
		n=1,
		p=1;
	
	printf("\nUTILIZANDO FOR: ");
	for(i=1;i<=100;i++)
		printf("%d ",i);
	
	printf("\n\nUTILIZANDO WHILE: ");
	while(n<101){
		printf("%d ",n++);
	}
	printf("\n\nUTILIZANDO DO WHILE: ");
	do{
		printf("%d ",p++);
	}while(p<101);
	printf("\n\n");
	return(0);
}

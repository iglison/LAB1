/* soma dos naturais abaixo de 1000 multiplos de 3 ou 5 */

#include <stdio.h>
int main(){
	int i, 
		soma3=0, 
		soma5=0, 
		total=0;
	
	for(i=0;i < 1000;i++){
		if((3*i) < 1000){
			soma3+=(3*i);
		}
		
		if((5*i) < 1000){
			soma5+=(5*i);
		}
		
	}
	total=soma3+soma5;
	printf("\nTOTAL = %d ",total);
	printf("\n\n ");
	return(0);
}

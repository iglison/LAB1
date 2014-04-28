/* Antecessor e sucessor de um número */

#include <stdio.h>

int main(){
	int x, a, s;
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&x);
	a = x-1;
	s = x+1;
	
	printf("O antecessor dele eh: %d \n",a);
	printf("O sucessor dele eh: %d \n\n",s);
	return(0);
}

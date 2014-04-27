/* Cinco primeiros Multiplos de 3 */
#include <stdio.h>

int main(){
	int i, M,
		c=0,
		n=3;
	for(i=0;i<=4;i++){
		c++;
		M = n*c;
		printf("%d  ",M);
	}
	printf("\n\n");
	return(0);
}

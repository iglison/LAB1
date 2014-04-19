//Farenheit para Celsius
#include <stdio.h>
int main(){
	float F,C;
	printf("Graus Farenheit: ");
	scanf("%f",&F);
	C = 5*(F-32)/9; //C = (F-32)/1.8; //OUTRA FORMULA 
	printf("\n%.2f%cF = %.2f%cC\n",F,-8,C,-8);
	return 0;
}

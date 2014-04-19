//Celsius para Farenheit
#include <stdio.h>
int main(){
	float F,C;
	printf("Graus Celsius: ");
	scanf("%f",&C);
	F = (9*C/5)+32;
	printf("\n%.2f%cC = %.2f%cF\n",C,-8,F,-8);
	return 0;
}

//calculo da área de um circulo
#include <stdio.h>
int main(){
	float r,pi;
	pi=3.141592;
	printf("Qual o raio da circunferencia: ");
	scanf("%f",&r);
	printf("\nArea = %.3fcm\n",pi*r*r);
	return(0);
}

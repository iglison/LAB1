/* Calculo da hipotenusa de um triangulo */
#include <stdio.h>
#include <math.h>
int main(){
	float a,b, //catetos de um triangulo
		hip; //hipotenusa
	
	printf("Informe os valores dos catetos do triangulo:\n");
	scanf("%f%f",&a,&b);
	
	a*=a;
	b*=b;
	hip = sqrt(a+b);

	printf("A hipotenusa do triangulo eh: %.1f\n\n",hip);
	return(0);
}

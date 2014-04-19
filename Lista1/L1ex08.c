//Média de 4 valores.
#include <stdio.h>
int main()
{
	float a,b,c,d;
	printf("Nota do primeiro bimestre: ");
	scanf("%f",&a);
	printf("\nNota do segundo bimestre: ");
	scanf("%f",&b);
	printf("\nNota do terceiro bimestre: ");
	scanf("%f",&c);
	printf("\nNota do quarto bimestre: ");
	scanf("%f",&d);
	
	printf("\nMedia: %.2f\n",(a+b+c+d)/4);
	return(0);
}

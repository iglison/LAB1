//Converte metros em centimetros
#include <stdio.h>
int main()
{
	float m,cm;
	printf("CONVERSOR Metros em Centimetros: \n");
	printf("   ");
	scanf("%f",&m);
	cm = m*100;
	printf("%.1fm equivale a %.2fcm \n\n",m,cm);
	return 0;
}

/* Informações sobre IMC */

#include <stdio.h>

int main(){
	float peso, altura, IMC;
	
	printf("Informe o PESO: ");
	scanf("%f",&peso);
	printf("Informe a ALTURA: ");
	scanf("%f",&altura);
	
	IMC = peso / (altura*altura);
	
	if(IMC <= 18.5)
		printf("\nAbaixo do Peso! \n\n");
	if(IMC >= 18.6 && IMC <= 24.9)
		printf("\nSaud%cvel! \n\n",-96);
	if(IMC >= 25.0 && IMC <= 29.9)
		printf("\nPeso em excesso! \n\n");
	if(IMC >= 30.0 && IMC <= 34.9)
		printf("\nObesidade Grau I! \n\n");
	if(IMC >= 35.0 && IMC <= 39.9)
		printf("\nObesidade Grau II (severa)! \n\n");
	if(IMC >= 40.0)
		printf("\nObesidade Grau III (m%crbida)! \n\n",-94);

	return(0);
}

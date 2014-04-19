//Peso do peixe.
#include <stdio.h>
int main(){
	float peso,multa,excesso;
	printf("Peso do peixe: ");
	scanf("%f",&peso);
	if(peso > 50){
		excesso = peso-50;
		multa = (peso-50)*4.00;
		printf("Excesso: %.2f  Multa: %.2f\n",excesso,multa);
	}else{
		excesso = 0;
		multa = 0;
		printf("Excesso: %.2f  Multa: %.2f\n",excesso,multa);
	}
	return 0;
}

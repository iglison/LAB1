/* Salário com 25% de aumento */

#include <stdio.h>

int main(){
	float salario, aumento,
		n=0.25;
	
	printf("Salario do funcionario: ");
	scanf("%f",&salario);
	aumento = salario * n;
	salario+=aumento;
	printf("%.2f de aumento = Salario atual: %.2f\n\n",aumento,salario);
	return(0);
}

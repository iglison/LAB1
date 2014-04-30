/* Emprestimo */

#include <stdio.h>

int main(){
	float sal, emp, fx;
	
	printf("Informe seu salario: ");
	scanf("%f",&sal);
	printf("Informe valor da parcela do emprestimo: ");
	scanf("%f",&emp);
	fx = sal * 0.20;
	if (emp > fx)
		printf("EMPRESTIMO NAO CONCEDIDO! \n\n");
	else
		printf("EMPRESTIMO CONCEDIDO! \n\n");
	
	return(0);
}

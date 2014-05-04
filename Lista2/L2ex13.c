/* Comissão do vendedor  por valor da venda */

#include <stdio.h>

int main(){
	float venda, comissao;
	
	printf("Valor da venda: ");
	scanf("%f",&venda);
	
	if (venda >= 100000.00){
		comissao = 700 + (0.16*venda);
	}
	if (venda >= 80000.00 && venda < 100000.00){
		comissao = 650 + (0.14*venda);
	}
	if (venda >= 60000.00 && venda < 80000.00){
		comissao = 600 + (0.14*venda);
	}
	if (venda >= 40000.00 && venda < 60000.00){
		comissao = 550 + (0.14*venda);
	}
	if (venda >= 20000.00 && venda < 40000.00){
		comissao = 500 + (0.14*venda);
	}
	if (venda < 20000.00){
		comissao = 400 + (0.14*venda);
	}
	printf("Comiss%co do vendedor: %.2f \n\n",-58,comissao);
	
	return(0);
}

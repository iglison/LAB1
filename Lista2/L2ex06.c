/* Dias trabalhados -(menos) IR(imposto de renda) */
#include <stdio.h>
int main(){
	float liq,
		enc = 30, //R$ 30,00 por dia trabalhado
		desc = 0.08; //desconto de 8%(IR)
	int dias;
	
	printf("Quantidade de dias trabalhados: ");
	scanf("%d",&dias);
	
	liq = dias * enc;
	desc = liq * desc;
	liq-=desc;
	
	printf("\nSalario liquido: %.2f\n\n",liq);
	return(0);
}

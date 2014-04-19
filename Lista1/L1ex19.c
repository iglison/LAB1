//Salario bruto com descontos.
#include <stdio.h>
int main()
{
	float v,h,bruto; //v=valor ganho por hora | h=tempo de trabalho
	float IR,INSS,SIND;
	printf("Ganho por hora: ");
	scanf("%f",&v);
	printf("Horas trabalhadas: ");
	scanf("%f",&h);
	//Formulas
	bruto = (v*h)*22;
	IR=bruto*0.11;
	INSS=bruto*0.08;
	SIND=bruto*0.05;
	printf("\nBRUTO: %.2f\n",bruto);
	printf("Imposto de Renda: %.2f\n",IR);
	printf("INSS: %.2f\n",INSS);
	printf("Sindicato: %.2f\n",SIND);
	printf("\nSALARIO LIQUIDO: %.2f\n",bruto-IR-INSS-SIND);
	return 0;
}

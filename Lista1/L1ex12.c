//Calculo de ganho por horas trabalhadas no mês
#include <stdio.h>
int main(){
	float ganho,hora,total;
	printf("Quanto voc%c ganha por hora: ",-120);
	scanf("%f",&ganho);
	printf("Quantas horas trabalha: ");
	scanf("%f",&hora);
	 //trabalhando 5 dias por semana, em 5 semanas no mês
	total = (ganho*hora)*22;
	printf("\n%.2f por M%cs\n",total,-120);
	return 0;
}

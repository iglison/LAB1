/* Tarifas de estacionamento */

#include <stdio.h>
//#include <sdtlib.h>

int main(){
	int Hc, Mc,
		Hs, Ms,
		Tc, Ts;
	float valor, hora;
	
	printf("Horario de CHEGADA (HH MM)  ");
	scanf("%d%d",&Hc,&Mc);
	
	if((Hc>06 && Hc<=18) && (Mc>=00 && Mc<=59) ){ //Horario de funcionamento
		
		printf("Horario de SAIDA (HH MM)  ");
		scanf("%d%d",&Hs,&Ms);
	
		if((Hs>06 && Hs<=18) && (Ms>=00 && Ms<=59) ){ //Horario de funcionamento
	
			Tc = Hc * 60;
			Tc+=Mc;
			Ts = Hs * 60;
			Ts+=Ms;
	
			if (Ts < Tc)
				Ts+=1440; //Ajuste do dia seguinte
	
			if (Ts - Tc <= 120){
				valor = 1.00;
				hora=(Ts-Tc)/60; //Horas no estacionamento
				printf("Vai pagar um real por hora\n");
				if ((Ts-Tc)%60 > 0){
					valor*=(hora+1);
					printf("Valor a pagar = %.2f\n\n",valor);
				}else{
					valor*=hora;
					printf("Valor a pagar = %.2f\n\n",valor);
				}
			}
			if (Ts - Tc > 120 && Ts-Tc <= 240){
				valor = 1.40;
				hora=(Ts-Tc)/60; 
				printf("Vai pagar um real e quarenta centavos por hora\n");
				if ((Ts-Tc)%60 > 0){
					valor*=(hora+1);
					printf("Valor a pagar = %.2f\n\n",valor);
				}else{
					valor*=hora;
					printf("Valor a pagar = %.2f\n\n",valor);
				}
			}
			if (Ts - Tc > 240){
				valor = 2.00;
				hora=(Ts-Tc)/60;
				printf("Vai pagar dois reais por hora\n");
				if ((Ts-Tc)%60 > 0){
					valor*=(hora+1);
					printf("Valor a pagar = %.2f\n\n",valor);
				}else{
					valor*=hora;
					printf("Valor a pagar = %.2f\n\n",valor);
				}
			}
		}else{
			printf("\nERROU O HORARIO - ESTACIONAMENTO FECHADO\n");
			printf("\nFUNCIONA DAS 07 00 %cs 19 00\n\n",-123);
		}
	}else{
		printf("\nERROU O HORARIO - ESTACIONAMENTO FECHADO\n");
		printf("\nFUNCIONA DAS 07 00 %cs 19 00\n\n",-123);
	}
	//system("pause");
	return(0);
}

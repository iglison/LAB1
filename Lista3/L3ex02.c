//*Consumo de energia por tipo de usuario*//
#include <stdio.h>
#include <stdlib.h> //biblioteca para usar: system("cls");
int main(){
	int num,i,code,
		cont=0,
		cont1=0,
		cont2=0,
		cont3=0;
	float kwh,cons,soma,
		s1=0,s2=0,s3=0,
		maior=0,
		menor=0;

	printf("Numero de habitantes: ");
	scanf("%d",&num);
	printf("Valor do kwh[R%c]: ",36);
	scanf("%f",&kwh);
	system("cls");
	for  (i=0;i<num;i++){
		printf("\n::: 1-RESIDENCIAL :::");
		printf("\n::: 2-COMERCIAL :::");
		printf("\n::: 3-INDUSTRIAL :::\n\n");
		printf("Informe o Codigo: ");
		scanf("%d",&code);
		printf("Informe o consumo: ");
		scanf("%f",&cons);
		
		soma+=cons; //soma todos os valores de consumo
		cont++; //contagem para fazer a média

// Calculo do maior e do menor consumo
		if (cons > maior){
			maior = cons;
		}
		if ((menor > cons)||(menor == 0)){
			menor = cons;
		}
// Soma de consumo por tipo de consumidor
		if (code==1){
			s1+=cons; //soma do consumo por código [RESIDENCIAL]
			cont1++;
		}
		if (code==2){
			s2+=cons; //soma do consumo por código [COMERCIAL]
			cont2++;
		}
		if (code==3){
			s3+=cons; //soma do consumo por código [INDUSTRIAL]
			cont3++;
		}
		system("cls");
	}
	printf("\n\n");
	printf("Maior: %.3f\n",maior);
	printf("Media: %.3f\n",(float)soma/cont);
	printf("Menor: %.3f\n",menor);
	printf("\n:1: %d  Consumo: %.2f ",cont1,s1);
	//printf("  Valor Total: %.2f\n",(kwh*s1)); // Valor em R$ do consumo total do Residencial
	printf("\n:2: %d  Consumo: %.2f ",cont2,s2);
	//printf("  Valor Total: %.2f\n",(kwh*s2)); // Valor em R$ do consumo total do Comercial
	printf("\n:3: %d  Consumo: %.2f ",cont3,s3);
	//printf("  Valor Total: %.2f\n",(kwh*s3)); // Valor em R$ do consumo total do Industrial
	
	return(0);
}
/*
 * 		

*/

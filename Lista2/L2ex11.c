/* Tempo de serviço X idade X aposentadoria */

#include <stdio.h>

int main(){
	int idade, tempo;
	
	printf("Digite a idade do trabalhador: ");
	scanf("%d",&idade);
	printf("Digite o tempo de servi%co: ",-121);
	scanf("%d",&tempo);
	
	if(idade >= 60 && tempo >= 25){
		printf("PODE SER APOSENTADO!\n\n");
	}else{
		if(idade >= 65 || tempo >= 35){
			printf("PODE SER APOSENTADO!\n\n");
		}
		else{
			printf("NAO PODE SER APOSENTADO!\n\n");
		}
	}
	return(0);
}

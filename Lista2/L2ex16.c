/* Mostra peso ideal por sexo */

#include <stdio.h>

int main(){
	char sexo;
	float altura, ideal;
	
	printf("Sexo[M/F]: ");
	scanf("%c",&sexo);
	printf("Altura: ");
	scanf("%f",&altura);
	
	if (sexo == 'M' || sexo == 'm'){
		ideal = (72.7*altura)-58;
		
		printf("Seu peso ideal eh: %.2f\n\n",ideal);
		
	}else{
		if (sexo == 'F' || sexo == 'f'){
			ideal = (62.1*altura)-44.7;
			
			printf("Seu peso ideal eh: %.2f\n\n",ideal);
			
		}else{
			printf("Sexo digitado incorretamente!!\n\n");
		}
	}
	return 0;
}


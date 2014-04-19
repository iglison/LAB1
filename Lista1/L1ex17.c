//Peso ideal por sexo.
#include <stdio.h>
int main(){
	char sexo;
	float altura,peso,ideal;//ideal=Peso ideal
	printf("Sexo[M/F]: ");
	scanf("%c",&sexo);
	printf("Altura: ");
	scanf("%f",&altura);
	
	if (sexo == 'M' || sexo == 'm'){
		ideal = (72.7*altura)-58;
		printf("Informe seu peso: ");
		scanf("%f",&peso);
		if (peso == ideal)
			printf("Homem com peso ideal!\n\n");
		if (peso > ideal)
			printf("Homem acima do peso ideal!\n\n");
		if (peso < ideal)
			printf("Homem abaixo do peso ideal!\n\n");
	}else{
		if (sexo == 'F' || sexo == 'f'){
			ideal = (62.1*altura)-44.7;
			printf("Informe seu peso: ");
			scanf("%f",&peso);
			if (peso == ideal)
				printf("Mulher com peso ideal!\n\n");
			if (peso > ideal)
				printf("Mulher acima do peso ideal!\n\n");
			if (peso < ideal)
				printf("Mulher abaixo do peso ideal!\n\n");
		}else{
			printf("Sexo digitado incorretamente!!\n\n");
		}
	}
	return 0;
}

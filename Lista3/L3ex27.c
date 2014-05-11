/* ler vetor de 5 posições de numeros reais */

#include <stdio.h>
#include <stdlib.h>

void sair();

int main(){
	float vet[5];
	int i, cod;
	
	do{
		system("cls || clear");
		printf("Digite CINCO numeros REAIS\n");
		for(i=1;i<=5;i++){
			scanf("%f",&vet[i]);
		}
		
		printf("\n\tDigite o que deseja:\n");
		printf(" 0- Fechar programa\n");
		printf(" 1- Mostrar vetor na ordem direta\n");
		printf(" 2- Mostrar vetor na ordem inversa\n");
		scanf("%d",&cod);
		printf("\n");
		switch(cod){
			case 1:
				for(i=1;i<=5;i++){
					printf(" %.2f ",vet[i]);
				}
				break;
			case 2:
				for(i=5;i>=1;i--){
					printf(" %.2f ",vet[i]);
				}
				break;
			case 0:
				sair();
				break;
			default:
				printf("\n\tDigitou opcao incorreta\n\n");
		}
		printf("\n\n");
		system("pause");
	}while(cod != 0);
	
	return(0);
}

void sair()
{
    printf("\n\tFechando Programa!\n");
}

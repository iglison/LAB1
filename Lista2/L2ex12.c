/* */
//	pow(x,1.0/3.0); //calculo de raiz cúbica
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void geo();
void pon();

int main(){
	int x, y, z,
		continua = 1;
	printf("Digite tres numeros inteiros\n");
	scanf("%d%d%d",&x,&y,&z);

	printf("\n\tCALCULOS DE MEDIAS\n\n");
	printf("1. GEOMETRICA\n");
	printf("2. PONDERADA\n");
	printf("3. HAMONICA\n");
	printf("4. ARITMETICA\n");
	printf("0. Sair\n");
	printf("\n::> ");
	scanf("%d",&continua);
	
	switch(continua){
		case 1:
			geo(x,y,z);
			break;
		case 2:
			pon(x,y,z);
			break;
		case 0:
			printf("\nBye!\n\n");
			break;
		default :
			printf("Digite uma op%c%co v%clida \n",-121,-58,-96);
	}
	
	return(0);
}

void geo(int x, int y, int z){
	
	x = x*y*z;
	printf("%.1f \n\n",pow((float)x,1.0/3.0));
}
void pon(int x, int y, int z){
	int k;
	k = (x+2*y+3*z)/6;
	printf("%.1f \n\n",(float)k);
}

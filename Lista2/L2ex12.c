/* Calculos de Médias matemáticass */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void geo();
void pon();
void har();
void ari();

int main(){
	int x, y, z,
		continua = 1;
	printf("Digite tres numeros inteiros\n");
	scanf("%d%d%d",&x,&y,&z);

	printf("\n\tCALCULOS DE MEDIAS\n\n");
	printf("1. GEOMETRICA\n");
	printf("2. PONDERADA\n");
	printf("3. HARMONICA\n");
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
		case 3:
			har(x,y,z);
			break;
		case 4:
			ari(x,y,z);
			break;
		case 0:
			printf("\nAte o proximo calculo!\n\n");
			break;
		default :
			printf("Digitou uma op%c%co inv%clida \n",-121,-58,-96);
	}
	
	return(0);
}

void geo(int x, int y, int z){
	int k;
	k = x*y*z;
	printf("%.2f \n\n",pow((float)k,1.0/3.0));
}
void pon(int x, int y, int z){
	int k;
	k = (x+2*y+3*z)/6;
	printf("%.2f \n\n",(float)k);
}
void har(int x, int y, int z){
	int k;
	x = 1/x;
	y = 1/y;
	z = 1/z;
	k = 1/(x+y*z);
	printf("%.2f \n\n",(float)k);
}
void ari(int x, int y, int z){
	int k;
	k = x+y+x;
	printf("%.2f \n\n",(float)k/3);
}

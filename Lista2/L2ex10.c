/* Opções de operações matemáticas */

#include <stdio.h>
#include <stdlib.h>

void soma();
void dife();
void prod();
void divi();

int main(){
	int continua = 1;
	do{
		printf("\n\tOPERA%c%cES MATEM%cTICAS\n\n",-128,-27,-75);
		printf("1. Soma de dois numeros\n");
		printf("2. diferen%ca entre dois numeros\n",-121);
		printf("3. Produto entre dois numeros\n");
		printf("4. Divis%co entre dois numeros\n",-58);
		printf("0. Sair\n");
		printf("\n::> ");
		scanf("%d",&continua);
		
		system("cls || clear");
	
		switch(continua){
			case 1:
				soma();
				break;
			case 2:
				dife();
				break;
			case 3:
				prod();
				break;
			case 4:
				divi();
				break;
			case 0:
				printf("Bye!\n\n");
				break;
			default:
				printf("Digite uma op%c%co v%clida \n",-121,-58,-96);
		}
	}while(continua);
	return(0);
}

void soma(){
	int x,y;
    printf("Digite dois numeros inteiros\n");
    scanf("%d%d",&x,&y);
    printf("%d + %d = %d \n\n",x,y,x+y);
    
    system("pause");
    system("cls || clear");
}

void dife(){
	int x,y;
	printf("Digite dois numeros inteiros\n");
	scanf("%d%d",&x,&y);
	if (x > y){
		printf("%d - %d = %d \n",x,y,x-y);
	}else{
		printf("%d - %d = %d \n",y,x,y-x);
	}
    
    system("pause");
    system("cls || clear");
}

void prod(){
	int x,y;
	printf("Digite dois numeros inteiros\n");
	scanf("%d%d",&x,&y);
	printf("%d * %d = %d \n",x,y,x*y);
    
    system("pause");
    system("cls || clear");
}

void divi(){
	float x,y;
	printf("Digite dois numeros inteiros\n");
	scanf("%f%f",&x,&y);
	if (y!=0){
		printf("%d / %d = %.1f \n",(int)x,(int)y,x/y);
	}
	if (x!=0){
		printf("%d / %d = %.1f \n",(int)y,(int)x,y/x);
	}
	if (x==0 && y==0)
		printf("DIGITOU NUMERO INCORRETO!!\n");
    
    system("pause");
    system("cls || clear");
}

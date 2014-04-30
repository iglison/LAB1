/* número de três digitos invertidos */
#include <stdio.h>

int main(){
	char um, dois, tres;
	printf("Digite um numero inteiro positivo de 3 digitos: ");
	scanf("%c%c%c",&um,&dois,&tres);
	printf("Numero ao contrario: %c%c%c\n\n",tres,dois,um);
	
	return(0);
}

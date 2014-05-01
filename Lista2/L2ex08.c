/* número de três digitos invertidos */
#include <stdio.h>

int main(){
	int x,u,d,c;
	
	printf("Digite um numero inteiro positivo de 3 digitos: ");
	scanf("%d",&x);
	u = x % 10;
	x = x - u;
	d = x % 100;
	x = x - d;
	d = d / 10;
	c = x % 1000;
	c = c / 100;
	x = u*100 + d*10 + c;
	printf("Numero ao contrario: %d\n\n",x);
	
	return(0);
}

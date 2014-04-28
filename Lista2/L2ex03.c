/* soma dos quadrados de tres valores lidos */
#include <stdio.h>

int main(){
	int x,y,z,soma;
	scanf("%d%d%d",&x,&y,&z);
	x*=x;
	y*=y;
	z*=z;
	soma = x+y+z;
	printf("\n\n %d \n\n",soma);
	return(0);
}

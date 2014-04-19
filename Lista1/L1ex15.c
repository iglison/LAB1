//calcula dois inteiros e um real.
#include <stdio.h>
int main(){
	int x,y;
	float h;
	
	printf("Digite dois numeros inteiros \n");
	scanf("%d%d",&x,&y);
	printf("Digite um numero real \n");
	scanf("%f",&h);
	
	printf("\n%d",(x*2)*(y/2));
	printf("\n%.2f",(x*3)+h);
	printf("\n%.2f\n",h*h*h);
	
	return 0;
}

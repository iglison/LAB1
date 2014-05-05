/* Soma de números aleatórios */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x, y, soma, result,
		cont=1,
		bom=0;
	
	srand( (unsigned)time(NULL) );
    
    do{
		cont++;
		x = rand()%100;
		y = rand()%100;
		printf("\nQual a soma de %d + %d ? ",x,y);
		scanf("%d",&soma);
		result = x + y;
		if(soma == result){
			bom++;
			printf("OK! %d + %d = %d\n\n",x,y,soma);
		}else{
			printf("%d + %d = %d\n\n",x,y,result);
		}
	}while(cont<=5);
    
    if(bom>1)
		printf("Voc%c acertou %d vezes\n\n",-120,bom);
	if(bom==1)
		printf("Voc%c acertou %d vez\n\n",-120,bom);
	if(bom==0)
		printf("Voc%c n%co obteve acertos\n\n",-120,-58);
	return(0);
}


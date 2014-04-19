//if(num=10)?
#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	//if(num=10) //vai estar atribuindo o valor 10 a variável "num", ocasionando erro
	if(num==10) //vai comparar a variável num ao numero digitado.
		printf("DIGITOU %d",num);
	return 0;
}

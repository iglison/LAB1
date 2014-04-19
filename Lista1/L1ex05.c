//Lê duas strings, mostra as strings e a segunda letra da string
#include <stdio.h>
int main()
{
	char x[20],k[20];
	int p=1;
	
	scanf("%s",x);
	scanf("%s",k);
	printf("\n%s %s\n",x,k);
	printf("\n%c _ %c\n",x[p], k[p]);
	return 0;
}

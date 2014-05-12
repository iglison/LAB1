/* Substitui '0' por '1' em uma string */

#include <stdio.h>

int contaChar();

int main(){
	char z[10];
	int n, i=0;
	
	printf("Digite... ");
	scanf("%s",z);
	n = contaChar(z);
	
	for(;i<=n;++i){
		if(z[i]=='0'){
			z[i] = '1';
			printf(" %c ",z[i]);
		}else{
			printf(" %c ",z[i]);
		}
	}
	
	
	return(0);
}
 
int contaChar(const char *str) 
{ 
    int i = 0;
 
    for(;str[i] != 0; ++i);
 
    return(i); 
}
 

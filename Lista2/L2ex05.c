
#include <stdio.h>
int main(){
	float premio = 780000.00,
		A, B, C;
	
	A = premio * 0.46;
	B = premio * 0.32;
	C = premio - (A+B);
	printf("\nPrimeiro ganhador recebe: %.2f\n",A);
	printf("Segundo ganhador recebe:    %.2f\n",B);
	printf("Terceiro ganhador recebe:   %.2f\n\n",C);
	
	return(0);
}

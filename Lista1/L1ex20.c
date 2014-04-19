//Tempo do download.
#include <stdio.h>
int main(){
	float arq,v,t;
	printf("informe o tamanho do arquivo[MB]: ");
	scanf("%f",&arq);
	printf("Velocidade da conex%co[Mbps]: ",-58);
	scanf("%f",&v);
	t=arq/v;
	if(t > 60){
		t=t/60;
		printf("Tempo do download: %.1fm \n\n",t);
	}else{
		printf("Tempo do download: %.2fs\n\n",t);
	}
	return 0;
}

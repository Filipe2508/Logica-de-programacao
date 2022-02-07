#include<stdio.h>
#include<stdlib.h>
main(){
	char r[20] = "Nova Iguaca", bairro[20] = "Limeira";
	int n = 34;
	float d = 100.000;
	
	printf("Rua: %s \n", r);
	printf("Bairro: %s \n", bairro);
	printf("Numero: %d \n",n);
	printf("Custa: R$ %.3f \n",d);
	system("pause");
}

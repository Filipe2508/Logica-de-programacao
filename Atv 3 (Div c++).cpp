#include<stdio.h>
#include<stdlib.h>
main(){
	float d, s, saldo;
	printf("Digite o valor de suas dividas: ");
	scanf("%f", &d);
	printf("Agora o seu salario: ");
	scanf("%f", &s);
	printf("Seu saldo atual: %.2f \n", d - s);
	
	system("Pause");
}

#include<stdio.h>
#include<stdlib.h>
main(){
	int a1, a2;
	printf("Digite o ano atual: ");
	scanf("%d", &a1);
	printf("Digite o ano de nascimento: ");
	scanf("%d", &a2);
	printf("Voce viveu aproximadamente %d" " dias \n", (a1 - a2) * 365);
	
	system("pause");
}

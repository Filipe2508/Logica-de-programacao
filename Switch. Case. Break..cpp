#include<stdio.h>
#include<stdlib.h>
main(){
	int opd;
	printf("----------MENU---------- \n");
	printf("[1] - Soma \n");
	printf("[2] - Subtrair \n");
	printf("[3] - Multiplicar \n");
	printf("[4] - Dividir \n");
	printf("------------------------ \n");
	printf("Escolha um opcao: ");
	scanf("%d", &opd);
	
	switch(opd){
		case 1:
			printf("Soma \n");
		break;
		case 2:
			printf("Subtrair \n");
		break;
		case 3:
			printf("Multiplicacao \n");
		break;
		case 4:
			printf("Divisao \n");
		break;
		default:
			printf("Erro! Valor invalido! \n\n");
	}
	system("Pause");
}

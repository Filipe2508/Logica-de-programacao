// Elabore um programa e informe ao usuário seu lugar na fila da vacinação do covid-19 solicitando a idade
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
main(){
	int OSNF;
	printf("----------Fila de Vacinacao---------- \n");
	printf("[1] - Menos de 18 anos \n");
	printf("[2] - 18 a 34 anos \n");
	printf("[3] - 35 a 59 anos \n");
	printf("[4] - 60 anos ou mais \n");
	printf("------------------------ \n");
	printf("Escolha uma opcao: ");
	scanf("%d", &OSNF);
	
	switch(OSNF){
		case 1:
			printf(" Voce se encontra no FIM da Fila – Novembro a Dezembro \n");
		break;
		case 2:
			printf("Voce se encontra em PENÚLTIMO da Fila - Setembro a Outubro \n");
		break;
		case 3:
			printf("Voce se encontra no MEIO da Fila - Junho a Agosto \n");
		break;
		case 4:
			printf("Voce se encontra no INICIO da Fila – Março a Maio \n");
		break;
		default:
			printf("Valor invalido! Tente novamente! \n\n");
	}
	system("Pause");
}

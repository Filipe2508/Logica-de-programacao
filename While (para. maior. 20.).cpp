#include<stdio.h>
#include<stdlib.h>
main(){
int n = 1, n1, n2;
	do{
		printf("Digite o primeiro valor: ");
		scanf("%d \n", &n1);
		printf("Digite p segundo valor: ");
		scanf("%d \n", &n2);
		printf("A soma dos valores são: ", n1 + n2);
	}while(n <= 20);

system("pause");
}


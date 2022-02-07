#include<stdio.h>
#include<stdlib.h>
main(){
int n1, n2;
	do{
		printf("Digite o primeiro valor: ");
	 	scanf("%d", &n1);
		printf("Digite p segundo valor: ");
		scanf("%d", &n2);
		printf("A soma dos valores sao: %d \n", n1 + n2);
	}while(n1 + n2 <= 20);
	
system("pause");
}

#include<stdio.h>
#include<stdlib.h>
main(){
	int n1, n2, soma;
	printf("Digite um valor: ");
	scanf("%d", &n1);
	printf("Digite outro valor: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	system("cls"); // limpar tela
	printf("A soma do valor: %d\n",soma);
	
	system("pause");
}

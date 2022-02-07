#include<stdio.h>
#include<stdlib.h>
main(){
	int x;
	printf("Informe um numero: ");
	scanf("%d", &x);
	printf("O sucessor e %d\n", x + 1);
	printf("O antecessor e %d\n", x - 1);
	
	system("pause");
}

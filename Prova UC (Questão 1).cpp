//1) Fa�a um programa que leia um n�mero e mostre uma mensagem indicando se este n�mero �  par ou �mpar e se � positivo ou negativo: 
#include<stdio.h>
#include<stdlib.h>
main(){
	int a;
	printf("Digite um valor: ");
	scanf("%d", &a);
	if((
	a % 2) == 0){
        printf("Numero par \n");
    }else{
    printf("Numero impar \n");
}
    if(a >= 0){
    	printf("Numero Positivo \n");
	}else{
	printf("Numero Negativo \n");
	}
	system("pause");
}

#include<stdio.h>
#include<stdlib.h>
main(){
    float med;
	printf("Digite um valor: ");
	scanf("%f", &med);
	if(med >= 7){
		printf("Aprovado! \n");
	}else{
		printf("Reprovado! \n");
	}
	system("pause");
}

#include<stdio.h>
#include<stdlib.h>
main(){
	int b = 1;
	while(b >= 1 && b <= 5){
		printf("Digite um valor: ");
		scanf("%d", &b);
	}
	system("Pause");
}

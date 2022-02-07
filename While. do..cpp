#include<stdio.h>
#include<stdlib.h>
main(){
	int S2, F, maior, menor;
	printf("Digite o valor: ");
	scanf("%d", &S2);
	maior = S2;
	menor = S2;
	do{
		printf("Informe um valor: ");
		scanf("%d", &S2);
		if(S2 > maior){
			maior = S2;
		}else{
			if(S2 < menor){
				  menor = S2;
	}		}
		
	F++;	
	}while(F < 20);
	system("Cls");
	printf("Maior valor: %d \n", maior);
	printf("Menor valor: %d \n", menor);

	system("pause");
}

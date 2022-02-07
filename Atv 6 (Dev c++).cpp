#include<stdio.h>
#include<stdlib.h>
main(){
     int i1, i2;
	 printf("Informe o ano que voce esta: ");
     scanf("%d", &i1);
     printf("Informe o ano do seu nascimento: ");
     scanf("%d", &i2);
     printf("A sua idade aproximadamente é %d \n", i1 - i2);
     
     system("pause");
}  

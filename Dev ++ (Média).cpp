#include<stdio.h>
#include<stdlib.h>
main(){
	float n1, n2, n3, n4, media;
	printf("Digite a nota do primeiro Bim: ");
	scanf("%f", &n1);
	printf("Digite a nota do segundo Bim: ");
	scanf("%f", &n2);
	printf("Digite a nota do terceiro Bim: ");
	scanf("%f", &n3);
	printf("Digite a nota do quarto Bim: ");
	scanf("%f", &n4);
	media = (n1 + n2 +n3 + n4) / 4;
	printf("A media e: %.1f\n",media);
	
	system("pause");
	
}

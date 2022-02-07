//Elabore um programa que leia a idade de Lucas, Amanda e Rodrigo, e mostre o resultado das diferenças de idades entre eles.
#include<stdio.h>
#include<stdlib.h>
main(){
	int i1, i2, i3;
	printf("Informe a idade de Lucas: ");
	scanf("%d", &i1);
	printf("Informe a idade de Amanda: ");
	scanf("%d", &i2);
	printf("Informe a idade de Rodrigo: ");
	scanf("%d", &i3);
	system("Cls");
	if(i1 > i2){
		printf("Lucas e mais velho que Amanda %d \n", i1 - i2);
	}else{
	printf("Lucas e mais novo que Amanda %d \n", i2 - i1);
	}
	if(i1 > i3){
		printf("Lucas e mais velho que Rodrigo %d \n\n", i1 - i3);
	}else{
	printf("Lucas e mais novo que Rodrigo %d \n\n", i3 - i1);
	}
	if(i2 > i1){
		printf("Amanda e mais velha que Lucas %d \n", i2 - i1);
	}else{
	printf("Amanda e mais nova que Lucas %d \n", i1 - i2);
	}
	if(i2 > i3){
		printf("Amanda e mais velha que Rodrigo %d \n\n", i2 - i3);
	}else{
	printf("Amanda e mais nova que Rodrigo %d \n\n", i3 - i2);
	}
	if(i3 > i2){
		printf("Rodrigo e mais velho que Amanda %d \n", i3 - i2);
	}else{
	printf("Rodrigo e mais novo que Amanda %d \n", i2 - i3);
	}
	if(i3 > i1){
		printf("Rodrigo e mais velho Lucas %d \n", i3 - i1);
	}else{
	printf("Rodrigo e mais novo que Lucas %d \n", i1 - i3);
	}
		
system("pause");
}

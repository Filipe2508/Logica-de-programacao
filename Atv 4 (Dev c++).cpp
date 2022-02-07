#include<stdio.h>
#include<stdlib.h>
main(){
	float r, dob, met;
	printf("Escreva um valor: ");
	scanf("%f", &r);
	dob = r * 2;
	met = r / 2;
	printf("O dobro do valor: %.1f \n", dob);
    printf("A metade do valor: %.1f \n", met);

    system("pause");
}

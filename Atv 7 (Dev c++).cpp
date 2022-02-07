#include<stdio.h>
#include<stdlib.h>
main(){


    float dist, consu, gas;
printf("Informe o preço da gasolina: ");
scanf("%f", &gas);
    printf("Consumo medio: ");
    scanf("%f", &consu);
    printf("Informe a distancia: ");
    scanf("%f", &dist);
    printf("O custo estimavel do conbustivel na viagem: %.2f \n",  (gas /consu) * dist);
    system("pause");
   
}

#include<stdio.h>
#include<stdlib.h>
main(){
     int v1, v2, t;
	 printf("informe um valor para A: ");
	 scanf("%d", &v1);
	 printf("Informe outro valor para B: ");
     scanf("%d", &v2);
     t = v1;
     v1 = v2;
	 v2 = t;
     printf("Troca A: %d \n", v1); 
     printf("Troca B: %d \n", v2);
    
     system("pause");
}

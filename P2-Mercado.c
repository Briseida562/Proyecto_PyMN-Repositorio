#include<stdio.h>

int NUMBOL;
float DESCU, TARIFIN, COSBOLSA, PRODUCOST;
char DEPA;
int main()


{
	printf("Bienvenido, estos son los departamento disponibles:\n");
	
	printf("(P) Perfumeria\n");
	printf("(S) Salchichoneria\n");
	printf("(C) Carniceria\n");
	printf("(L) Limpieza\n");
	printf("Por favor, elija el departamento en el que desea hacer su compra:\n");
	scanf("%c",&DEPA);
	printf("costo de su producto:\n");
	scanf("%f",&PRODUCOST);
	printf("¿cuantas bolsas necesitara?\n");
	scanf("%d",&NUMBOL);
	
	switch (DEPA)
	{
	     
	     case 'P':
	     DESCU=PRODUCOST*0.20;
	     COSBOLSA=NUMBOL*0.10;
	     TARIFIN=PRODUCOST-DESCU+COSBOLSA;
	     break;
	     
	     case 'S':
	     DESCU=PRODUCOST*0.40;
	     COSBOLSA=NUMBOL*0.10;
	     TARIFIN=PRODUCOST-DESCU+COSBOLSA;
		 break;
	     
	     case 'C':
	     DESCU=PRODUCOST*0.20;
	     COSBOLSA=NUMBOL*0.10;
	     TARIFIN=PRODUCOST-DESCU+COSBOLSA;
	     break;
	     
	     case 'L':
	     DESCU=PRODUCOST*0.35;
	     COSBOLSA=NUMBOL*0.10;
	     TARIFIN=PRODUCOST-DESCU+COSBOLSA;
	     break;
	     
	}
printf("\n Esta es su tarifa final: %0.2f", TARIFIN);
return 0;
}	

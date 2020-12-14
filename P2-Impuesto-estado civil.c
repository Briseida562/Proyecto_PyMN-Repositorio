#include<stdio.h>

float GanMen, imp, tarifaFinal;
int estCiv;

int main()
{
	printf("\n");
	printf("\t\tEl codigo de SOLTERO = 1"); 
	printf("\t\tEl codigo de CASADO = 2\n");
	printf("\n  El estado civil de la persona es: ");
	scanf("%d",&estCiv);
		switch(estCiv)
		{
			case 1:
				printf("\n\t\tSOLTER0");
				printf("\n  La ganancia mensual de la persona es de: ");
				scanf("%f",&GanMen);
				if(GanMen<=32000)
				{
					imp=(GanMen*10)/100;
					tarifaFinal=GanMen-imp;
					printf("  La tarifa final de la ganancia total es de: %0.2f",tarifaFinal);
				}
				else
				{
					imp=(GanMen*25)/100;
					tarifaFinal=GanMen-imp;
					printf("  La tarifa final de la ganancia total es de: %0.2f",tarifaFinal);
				}
				break;
		
			case 2:
				printf("\n\t\tCASADO");
				printf("\n  La ganancia mensual de la persona es de: ");
				scanf("%f",&GanMen);
				if(GanMen<=62000)
				{
					imp=(GanMen*10)/100;
					tarifaFinal=GanMen-imp;
					printf("  La tarifa final de la ganancia total es de: %0.2f",tarifaFinal);
				}
				else
				{
					imp=(GanMen*25)/100;
					tarifaFinal=GanMen-imp;
					printf("La tarifa final de la ganancia total es de: %0.2f",tarifaFinal);
				}
				break;
		}
		return 0;
}


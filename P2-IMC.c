#include<stdio.h>
	int PESO;
	float ALT, IMC;
int main()
{
	printf("\n¿cual es su peso?: ");
	scanf("%d",&PESO);
    printf("\n¿cual es su altura?: ");
    scanf("%f",&ALT);
    
    IMC=PESO/(ALT*ALT);
    
    if (IMC<18.5)
    {
    	printf("Peso bajo");
	}
	else
	{
		if(IMC>18.5 && IMC<=24.9)
		{
			printf("Peso normal");
		}
		else
		{
			if(IMC>=25.0 && IMC<=29.9)
			{
				printf("Tiene sobrepeso");
			}
			else
			{
				if(IMC>=30.0 && IMC<=34.5)
				{
					printf("Tiene obesidad TIPO 1");
				}
				else
				{
					if(IMC>=35.0 && IMC<=39.9)
					{
						printf("Tiene obesidad TIPO 2");
					}
					else
					{
						if(IMC>=40)
						{
							printf("Tiene hiper-obesidad");
						}
					}
				}
			}
		}
	}
return 0;
}

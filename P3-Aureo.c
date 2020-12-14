#include<stdio.h>
double j, NUM, a=0, b=1, c=1, AUR;

int main()
{
	printf("Ingresar el numero de elemento/iteraciones, por favor\n");
	scanf("%lf",&NUM);
	printf("1,");
	    for (j=1; j<NUM; j++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%1.01f, ", c);
	}
	
	AUR=c/a;
	printf("tu numero Aureo es: %1f \n", AUR);
	return 0;
	
}

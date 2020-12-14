#include <stdio.h>

float V,radio, pi=3.1415;

int main()
{ 
    printf("Dame el valor del radio:");
	scanf("%f",&radio);

	V=0.75*pi*radio*radio*radio;

	printf ("El volumen es de: %.3f",V);
	return 0;	
}


#include <stdio.h>

float w, masa;
float Gravi= 9.81;
int main()
{
    printf ("Introduzca la masa: ");
    scanf ("%f",&masa);

    w= masa*Gravi;

    printf("Su fuerza de atraccion es de: %.2f N", w);
    
}


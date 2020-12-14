#include <stdio.h>
#include <math.h>
float AL, PES, IMC;
char NOM[20];
char ED[3];
int main()
{
    printf("Introduce su nombre: ");
    scanf ("%s",&NOM);
    printf("Introduce tu edad: ");
    scanf("%s",&ED);
    printf("Introduce tu altura (en metros): ");
    scanf("%f",&AL);
    printf("Introduce tu Peso (en kilogramos):");
    scanf("%f",&PES);
    IMC=PES/(AL*AL);
    printf("\n %s \n", NOM);
    printf("\n %s \n", ED);
    printf(" Altura = %0.2f\n", AL);
    printf(" Peso = %0.2f\n", PES);
    printf(" Indice de masa corporal es: %0.2f \n", IMC );
    
return 0;
}

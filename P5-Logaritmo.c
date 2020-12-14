#include <stdio.h>
#include<math.h>
float LOGA(float x_entrada);
float ERRORELATIVO(float VALORANALITICO, float VALORNUMERICO);
float VALORNUMERICO, VALORANALITICO, X_ENT;

int main()
{
	X_ENT=5;
	VALORANALITICO=22.6094;
	VALORNUMERICO=22;
	printf("para el logaritmo f(5) es igual a %2.4f\n", LOGA(X_ENT));
	printf("el error relativo porcentual = %2.4f%% \n", ERRORELATIVO(VALORANALITICO, VALORNUMERICO));
}
float LOGA(float X_ENTRADA){
//in(x) + x^2 - 4
    float fx;
    fx=(log(X_ENTRADA)) + pow(X_ENTRADA,2)-4;
    return fx;
}
float ERRORELATIVO(float VALORANALITICO, float VALORNUMERICO){
//epsilon= abs (VALORANALITICO-VALORNUMERICO/VALORNUMERICO)*100	
	float EPSILON;
	EPSILON=fabs((VALORANALITICO - VALORNUMERICO)/VALORNUMERICO)*100;
	return EPSILON;
}

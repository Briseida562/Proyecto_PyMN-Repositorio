#include <stdio.h>
#include<math.h>
float funcion1(float x_ent); //f1(x) = 2xcos(2x)-(x+1)^2
float errorRelativo(float va,float vn); // epsilon = abs(va-vn/va)*100
float va, vn, x_in; //Valores para probar las funciones
int main()
{
    x_in = 2; //Valor para probar f1(x)
    va = -2.1913; //Valor analitico (raiz real de f1(x))
    vn = -3.12;  // valor numerico propuesto lejano
   // vn = -2.0013; // valor numerico cercano propuesto
    printf("el valor de f(2) es = %2.4f\n",funcion1(x_in));
    printf("Error relativo con valor lejano =%4.4f%% \n",errorRelativo(va,vn));
}
float funcion1(float x_ent){
    float fx;
    fx = (2*x_ent*cos(2*x_ent))-pow(x_ent+1,2);
    return fx; //salida --->f(x)
}
float errorRelativo(float va, float vn){
    float epsilon;
    epsilon = fabs((va-vn)/va)*100;
    return epsilon; 
}


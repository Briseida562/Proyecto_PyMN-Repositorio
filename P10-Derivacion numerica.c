#include <stdio.h>
#include<math.h>

	//°°°°Programa donde se calculara una derivada numerica de orden h2 hacia adelante°°°°\\
	//°°°°Declaramos la funcion de derivacion hacia adelante°°°°\\
	
float DerivAdelante(float h, float(Xi));
float DerivAtras(float h, float(Xi));
float DerivAcentrada(float h, float(Xi));

	//°°°°Declaramos las variables para ejecutar la funcion en el programa°°°°\\
	
float Xi,h,O;
int main()

{
 printf( " °|En que incremento desea imprimir resultados?, Favor de seleccionar el numero|° \n\n *h=0.5 \n *h=0.2 \n *h=0.1 \n *h=0.01 \n");
 scanf("%f",&O);
 
    Xi=0.6; h=O;
    	printf("Se esta calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6\n");
    	printf("El valor para h=%f es: %f \n",h,DerivAdelante(Xi,h));
    	printf("El valor para h=%f es: %f \n",h,DerivAtras(Xi,h));
    	printf("El valor para h=%f es: %f\n",h,DerivAcentrada(Xi,h));
     
}

	//°°°°Definimos la funcion f'(xi) = (-f(xi+2)+4f(xi+1)-3f(xi))/2h°°°°\\

	// | Derivamos hacia adelante ----> | 
		
	float DerivAdelante(float h, float(Xi)){
    float dfXi, fXi, fXip1, fXip2;
    	fXi = 1-exp(-Xi/0.2); //Se evalua la funcion en xi f(xi)
    	fXip1 = 1-exp(-(Xi+h)/0.2); // Evaluamos f(xi+1)
   		fXip2 = 1-exp(-(Xi+(2*h))/0.2); //Evaluamos f(xi+2)
    		dfXi = (-fXip2+4*fXip1-3*fXi)/(2*h);
    
	return dfXi; 
}

	//°°°°Definimos la funcion f'(xi) = (-f(xi+2)+4f(xi+1)-3f(xi))/2h°°°°\\
	
	// | Derivamos hacia atras <---- |
	
float DerivAtras(float h, float(Xi)){
    float dfXi, fXi, fXip1, fXip2;
    fXi = 1-exp(-Xi/0.2); //Se evalua la funcion en xi f(xi)
    fXip1 = 1-exp(-(Xi-h)/0.2); // Evaluamos f(xi-1)
    fXip2 = 1-exp(-(Xi-h)/0.2); // Evaluamos f(xi-2)
    dfXi = (3*fXi-4*fXip1-fXip2)/(2*h);
    
	return dfXi; 
}
	// | Derivamos hacia el centro ----> ° <---- |
	
float DerivAcentrada(float h, float(Xi)){
    float dfXi, fXi, fXip1, fXip2;
    
   fXip1 = 1-exp(-(Xi+h)/0.2); // Evaluamos f(xi+1)
   		fXip2 = 1-exp(-(Xi-h)/0.2); // Evaluamos f(xi-1)
    	dfXi =(fXip1-fXip2)/(2*h);
    	
    return dfXi; 
}

#include <stdio.h>
#include <math.h>

float f(float x)
{
 	float y;
 		y= 2*x*x*x-11*x*x+17.7*x-5;
 		return y;
}
float fprima(float x)
{
 float y;
 	y=6*x*x-22*x+17.7;
 	return y;
}
float newtonRa(float X0,int iter)
{
 int i=0;
 float xi, ximsuno,erp;
 xi=X0;
 printf("i \t Xi \t\t Xi+1 \t\t Err\n");
 do
 {
 ximsuno= xi - f(xi)/fprima(xi);
 erp= fabs((ximsuno-xi)/ximsuno)*100;
 printf("%i \t %.8f \t %.8f \t %.8f \n",i,xi,ximsuno,erp);
 i++;
 xi=ximsuno;
 }while(i<iter);
 return ximsuno;
}

int main ()
{
 float X0=0.3;
	int iter=5;
 	float raiz;
 		raiz=newtonRa(X0,iter);
 		printf("\n\n");
return 0;
}

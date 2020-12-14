#include <stdio.h>
#include <math.h>

float f(float x)
{
 float y;
 	y= 2*x*x*x-11*x*x+17.7*x-5;
 	return y;
}
float sec(float x0,float x1, int iter)
{
 	int i=1;
 	float xi, ximsuno,ximnsuno,erp;
 	float fprima;
 		printf("i \t Xi \t\t Xi-1 \t\t Xi+1 \t\t ~=f'(x) \t Err\n");
 		xi=x1;
 		ximnsuno=x0;
 do
 {
 ximsuno= xi - (f(xi)*(ximnsuno-xi))/(f(ximnsuno)-f(xi));
 erp= fabs((ximsuno-xi)/ximsuno)*100;
 fprima= (f(ximnsuno)-f(xi))/(ximnsuno-xi);
 printf("%i \t %.8f \t %.8f \t %.8f \t%.8f\t%.8f\n",i,xi,ximnsuno,ximsuno,fprima,erp);
 ximnsuno=xi;
 xi=ximsuno;
 i++;
 }while(i<=iter);
 return ximsuno;
}

int main ()
{
float x0=0.3, x1=0.5,raiz;
 	int iter=5;
 	raiz=sec(x0,x1,iter);
return 0;
}

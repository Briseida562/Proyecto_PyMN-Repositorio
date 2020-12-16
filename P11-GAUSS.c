//Gauss Seidel
#include  <stdio.h>
#include <math.h>

float A[3][3] = { {10, 2, -1} , {-3, -6, 2} , {1, 1, 5} };

float B[3] = {27, -61.5, -21.5};

float x_inicial1, x_inicial2, x_inicial3, ERR1, ERR2, ERR3, X1D, X2D, X3D;
float x_ite_1, x_ite_2, x_ite_3;

int i, j;

int main ()
{

for (j=0; j<5; j++)

  {

if (j == 0)
      {

x_ite_1 = B[0]/A[0][0];

x_ite_2 = ((-A[1][0]*x_ite_1)+B[1])/A[1][1];

x_ite_3 = ((-A[2][0]*x_ite_1)-(A[2][1]*x_ite_2)+B[2])/A[2][2];

	printf (" Metodo de Gauss Seidel\n" );

	printf (" x_1 En la iteracion 1 es igual a %f\n", x_ite_1);

	printf (" x_2 En la iteracion 1 es igual a %f\n", x_ite_2);

	printf (" x_3 En la iteracion 1 es igual a %f\n", x_ite_3);

}


    else
      {

X1D = x_ite_1;
x_ite_1 = ((-A[0][1] * x_ite_2)-(A[0][2]*x_ite_3)+B[0])/A[0][0];
ERR1 = fabs((x_ite_1-X2D)/(x_ite_1))*100;

X2D = x_ite_2;
x_ite_2 = ((-A[1][0]*x_ite_1)-(A[1][2]*x_ite_3)+B[1])/A[1][1];
ERR2 = fabs((x_ite_2-X2D)/(x_ite_2))*100;

X3D = x_ite_3;
x_ite_3 = ((-A[2][0]*x_ite_1)-(A[2][1]*x_ite_2)+B[2])/A[2][2];
ERR3 = fabs((x_ite_3-X3D)/(x_ite_3))*100;

	printf
	  	(" x_1 En la iteracion %d es igual a %f, Con un error del %f%%\n", j + 1, x_ite_1, ERR1);

	printf
	  	(" x_2 En la iteracion %d es igual a %f, Con un error del %f%%\n", j + 1, x_ite_2, ERR2);

	printf
	  	(" x_3 En la iteracion %d es igual a %f, Con un error del %f%%\n", j + 1, x_ite_3, ERR3);

}

}

}

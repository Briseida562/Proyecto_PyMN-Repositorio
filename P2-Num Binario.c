#include<stdio.h>

int main()
{
      int BINARIO[100], i=0, j=0, NUM;
      printf("dame un numero: \n");
      scanf("%d",&NUM);
      
      for(i=100;i>0;i--)
      {
           BINARIO[i]=NUM%2;
           NUM=NUM/2;
      }
      for(i=1;i<=100;i++)
      {
           if(BINARIO[i]==1)
           {
                for(j=i;j<=100;j++)
                {
                     printf("\n%d",BINARIO[j]);
                }
                break;
           }
      }
      return 0;
}

#include<stdio.h>

int yo,k,lo;
int s,ja,br,aa,ab;
int main (){
    
	do{
		
printf("ingrese 4 cifras de numeros, por favor, verificar que no se repitan los numeros \n");
scanf("%d",&yo);
	
	lo=yo%10;
	k=yo-lo;
	k=k%100;
	s=k/10;

	br=yo-s-lo;
	br=br%1000;
	ja=br/100;
	ab=yo-ja-s-lo;
	aa=ab/1000;

}

while (yo<999 && yo>10000);

if (s!=lo && s!=aa && lo!=aa && lo!=ja && ja!=s && ja!=aa){
    printf("Muy bien, el codigo es valido \n");
    	printf("\n");
    
}

else{
    printf("Lo sentimos, su codigo no es valido \n");
    
return 0;
    
}
}

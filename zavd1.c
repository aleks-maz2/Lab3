#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int b,c;
	float a;
	setlocale(LC_CTYPE,"ua");
	printf("Введiть b=");
	scanf("%d",&b);
	printf("Введiть с=");
	scanf("%d",&c);

	if(c==5){
		a = sqrt(b)+2*sqrt(c);
		printf("a= %f",a);
	}
	if(c==0){
		a = (b)/(c+6);
		printf("a= %f",a);
	}
	if(c==-5){
		a = b+12*pow(c,3);	
		printf("a= %f",a);
	}
	if(c != 5 && c != 0 && c != -5){
		printf("Не має розв'язку!");	
	}
	printf("\n\n\n");
}

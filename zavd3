#include <stdio.h>
#include <math.h>
#include <locale.h>
#include < string.h >

int main()
{
	int x,y,z;
	float b;

	setlocale(LC_ALL, "ua");
	printf("Введiть x=");
	scanf("%d",&x);
	printf("Введiть y=");
	scanf("%d",&y);
	printf("Введiть z=");
	scanf("%d",&z);

	
	b = (1+cos(y-2))/((pow(x,4)/2)-(1-cos(2*z))/2);
	
	//sin квадрат альфа можна розписати як (1-cos(2*альфа))/2
	if((pow(x,4)/2)-(1-cos(2*z))/2 == 0) {
		printf("Ділення на нуль неможливе!");
	}
	else {
		printf("%f",b);
	}

	
	

	printf("\n");
}

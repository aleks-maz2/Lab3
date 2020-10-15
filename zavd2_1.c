#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ua");
	int x;

	printf("Введiть число x: ");
	scanf("%d", &x);


	if(x == 0) {
		printf("Число нуль");
	}
	else if (x % 2 == 0 && x > 0)
	{
		printf("Число %d парне додатне число", x);
	}
	else if (x % 2 == 0 && x < 0) {
		printf("Число %d парне вiд'ємне число", x);
	}
	else if (x % 2 != 0 && x < 0) {
		printf("Число %d непарне вiд'ємне число", x);
	}
	else {
		printf("Число %d непарне додатне число", x);
	}

	printf("\n\n");
	
	
}

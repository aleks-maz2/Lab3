#include <stdio.h>
#include <math.h>
#include <locale.h>
#include < string.h >

int main()
{
	char str1[20];
	int n;
	setlocale(LC_ALL, "ua");
	printf("8 одногрупникiв:\n");
	printf("1.Андроцуляк Андрiй\n2.Одобеску Iлля\n3.Прискурi Вадим\n4.Червоногродська Ганна\n5.Кобель Валентин\n6.Ковальов Максим\n7.Козуб Вадим\n8.Костик Марiн\n");
	printf("Введiть прiзвище: ");
	scanf("%s",&str1);

	if(strcmp (str1, "Андроцуляк")==0) n = 1;
	else if(strcmp (str1, "Одобеску")==0) n = 2;	
	else if(strcmp (str1, "Прискурi")==0) n = 3;	
	else if(strcmp (str1, "Червоногродська")==0) n = 4;
	else if(strcmp (str1, "Кобель")==0) n = 5;
	else if(strcmp (str1, "Ковальов")==0) n = 6;
	else if(strcmp (str1, "Козуб")==0) n = 7;
	else if(strcmp (str1, "Костик")==0) n = 8;	
	else n = 0;	

	switch (n)
	{
 		case 1: printf("Андрiй"); break;
 		case 2: printf("Iлля"); break;
 		case 3:  printf("Вадим"); break;
		case 4:  printf("Ганна"); break;
		case 5:  printf("Валентин"); break;
		case 6:  printf("Максим"); break;
		case 7: printf("Вадим"); break;
		case 8: printf("Марiн"); break;
 		default: printf ("Такого прiзвища немає! ");
	}
	printf("\n");
}

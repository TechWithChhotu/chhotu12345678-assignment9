//Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
int year;
	printf("Enter a year to check leap or not: ");
	scanf("%d",&year);
	switch(year%4){
		case 0:
			printf("Entred year is leap");
			break;
		case 1:
			printf("Enter year is not leap.");
	}
return 0;
}


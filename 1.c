//Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
	int N;
	printf("Enter month number: ");
	scanf("%d",&N);
	
	switch(N){
		case 1: 
		printf("31 days");
		break;
		case 2: 
		printf("28/29 days");
		break;
		case 3: 
		printf("31 days");
		break;
		case 4: 
		printf("30 days");
		break;
		case 5: 
		printf("31 days");
		break;
		case 6: 
		printf("30 days");
		break;
		case 7: 
		printf("31 days");
		break;
		case 8: 
		printf("31 days");
		break;
		case 9: 
		printf("30 days");
		break;
		case 10: 
		printf("31 days");
		break;
		case 11: 
		printf("30 days");
		break;
		case 12: 
		printf("31 days");
		break;
		default:
			printf("invalid 1<=month number<=12&&");
	}
return 0;
}


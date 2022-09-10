/*Write a program which takes the day number of a week and displays a
unique greeting message for the day*/
#include<stdio.h>
int main()
{
	int N;
	printf("Enter day number: ");
	scanf("%d",&N);
	
	switch(N){
		case 1:
			printf("hey, good morning\n\thappy sunday");
		break;
		case 2:
			printf("hello, good morning\n\thappy monday");
		break;
		case 3:
			printf("good morning\n\thappy tuesday");
		break;
		case 4:
			printf("good morning all of you\n\thappy wednesday");
		break;
		case 5:
			printf("hey, good morning\n\thappy thursday");
		break;
		case 6:
			printf("hello, good morning\n\thappy friday");
		break;
		case 7:
			printf("good morning\n\thappy saturday");
		break;
		default: 
		printf("invalid");
	}
return 0;
}


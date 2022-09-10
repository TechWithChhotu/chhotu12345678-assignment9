/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N;
	float a,b;
	printf("1. press 1 for addition\n2. press 2 for subtraction\n3. press 3 for multiplication\n4. press 4 for division\n5. press 5 for exit\n\n\tpress: ");
	scanf("%d",&N);
	
	switch(N){
		case 1:
			printf("Enter the value of a & b: ");
			scanf("%f%f",&a,&b);	
			printf("a+b = %0.2f",a+b);
		break;
		case 2:
			printf("Enter the value of a & b: ");
			scanf("%f%f",&a,&b);
			printf("a-b = %0.2f",a-b);	
		break;
		case 3:
			printf("Enter the value of a & b: ");
			scanf("%f%f",&a,&b);
			printf("a*b = %0.2f",a*b);	
		break;
		case 4:
			printf("Enter the value of a & b: ");
			scanf("%f%f",&a,&b);	
			printf("a/b = %0.2f",a/b);
		break;
		case 5:
			exit(0);
		break;

	}
return 0;
}


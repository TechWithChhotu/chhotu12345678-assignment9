/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,N;
	while(1){
	printf("\n1. press 1 to check isosceles triangle:\n");
	printf("2. press 2 to check right angle triangle:\n");
	printf("3. press 3 to check equilateral triangle:\n");
	printf("4. press 5 to exit.\n\n\tpress: ");
	scanf("%d",&N);
	switch(N){
		case 1: 
			printf("\nEnter three number are lengths: ");
			scanf("%d%d%d",&a,&b,&c);
			if(a!=b&&b!=c&&c!=a)
			printf("isosceles triangle\n");
			else
			printf("not isosceles triangle\n");
		break;
		case 2: 
			printf("\nEnter three number are lengths: ");
			scanf("%d%d%d",&a,&b,&c);
			if(a==b+c||c==a+b||b==c+a)
			printf("right angle triangle\n");
			else
			printf("not right angle triangle\n");
		break;
		case 3: 
			printf("\nEnter three number are lengths: ");
			scanf("%d%d%d",&a,&b,&c);
			if(a==b==c)
			printf("equilateral triangle\n");
			else
			printf("not equilateral triangle\n");
			
		break;
		case 4: 
			exit(0);
		break;
	}
}
	
return 0;
}


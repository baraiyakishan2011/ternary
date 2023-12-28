#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	printf("Enter value of D = ");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("A is maximum"):printf("D is maximum"):printf("C is maximum")
		 :(b>c)?(b>d)?printf("B is maximum"):printf("D is maximum"):printf("C is maximum");
}
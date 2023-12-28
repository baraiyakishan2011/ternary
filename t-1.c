#include<stdio.h>

main ()
{
	int a,b;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	
	(a>b)?printf("A is maximum"):printf("B is maximum");
}
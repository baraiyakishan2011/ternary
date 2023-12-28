#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("A is maximum"):printf("C is maximum")
		 :(b>c)?printf("B is maximum"):printf("C is maximum");
}
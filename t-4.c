#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	printf("Enter value of D = ");
	scanf("%d",&d);
	printf("Enter value of E = ");
	scanf("%d",&e);
	
(a>b) ? (a>c) ? (a>d) ? (a>e) ? printf("A is maximum") : printf("E is maximum") : (d>e) ? printf("D is maximum") : printf("E is maximum") : (c>d) ? (c>e) ? printf("C is maximum") : printf("E is maximum") : (d>e) ? printf("D is maximum") : printf("E is maximum")
	      : (b>c) ? (b>d) ? (b>e) ? printf("B is maximum") : printf("E is maximum") : (d>e) ? printf("D is maximum") : printf("E is maximum") : (c>d) ? (c>e) ? printf("C is maximum") : printf("E is maximum") : (d>e) ? printf("D is maximum") : printf("E is maximum");
}
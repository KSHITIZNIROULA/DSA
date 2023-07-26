//wap to calaculate the sum of the first n natural numbers using recursion
#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return n+sum(n-1);
}void main()
{
	int n;
	printf("how many numbers you want to sum:");
	scanf("%d",&n);
	printf("\nsum of %d natural numbers is:%d", n, sum(n));
	getch() ;
	
}

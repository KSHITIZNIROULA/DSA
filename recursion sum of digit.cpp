//wap to calculate the sum of digits osa number using recursion
#include<stdio.h>
int sumOfDigit(int n)
{
	if(n<10)
	return n;
	else
	return n%10+sumOfDigit(n/10);
}void main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("\nsum of  digit of %d is : %d", n,sumOfDigit (n));
	getch() ;
	
}


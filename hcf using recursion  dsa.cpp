//find hcf of two integers using recursion
#include<stdio.h>
int hcf(int a,int b)
{
	if(a%b==0)
	return b;
	else
	return hcf(b,a%b);
}

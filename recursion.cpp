#include<stdio.h>
#include<stdio.h>
void toh(int n,char s,char i,char d )
{
	if(n>0)
	{
		toh(n-1,s,d,i);
		printf(" \nmove %dth disk from %c to %c.",n,s,d);
		toh(n-1,i,s,d);
	}
}
void main()
{
	int n;
	clrscr();
	printf("how many disk:");
	scanf("%d",&n);
	toh(n,'S','I','D');
	getch();

	
}

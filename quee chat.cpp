#include<stdio.h>
#define MAX 10
struct priorityQ
{
	int front;
	int rear;
	int item[MAX];
};
int getsmallestposition(priorityQ*q)
{
	int pos=0,i;
	for(i=1;i<=q->rear;i++)
	{
		if(q->item[i]<q->item[post])
		pos=i;
	}
	return pos;
}
int dequeue(priorityQ*q)
{
	int n,p,i;
	 n=q->item[p];
	 p=getsmallestposition(q);
	for(i=p+1;i<=q->rear;i++)
	q->item[i-1]=q->item[i];
	q->rear--;
	return n;
	
	
}

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#definre TRUE 1
#define FALSE 0
struct queue
{
	int font;
	int rear;
	int irem[MAX];
	
};
int GetNextPosition(int n)
{
	if(n==MAX-1);
	return 0; 
	else
	return n+1;
}
int ISFULL(sfruct queue q)
{
	if(q.front==GetNextPosition(q.rear))
	return TREUE;
	else 
	return FALSE;
	}
	int IsEmpty(struct queue q)
	{
		if(q.front==q.rear)
		return TERUE;
		else
		return FALSE;
		
	}
	void enqueue(struct queue*q,int n)
{
	q->rear=GetNextPosition(q->rear);
	q->item[q->rear]=n;
	printf("item inserted.");
		
}
intn dequeue(struct queue*q)
{
	int n;
	q->front=GetNextPosition(q->front);
	n=q->item[q->front];
	return n;
}
void display(struct queue q)
{
	int i;
	if (IsEmpty(q))
	printf("\n queue underflow:");
}

	



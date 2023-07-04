#include<stdio.h>
#
struct mode
{
int data;//hold actual data in anode
struct node*next;//	hold the address of the next node in the list
};
struct node*getnode(int n)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	return newnode;
}
void insertAtlast()
{
	int n;
	struct node*ptrnew,*ptrthis;
	printf("\nEnter a nunber:");
	scanf("%d",&n);
	ptr=getnode(n);
	if(header==NULL)
	header=ptr;
	else
	{
	for(ptrthis=header;ptrthis->next!=NULL;ptrthis=ptrthis->next){}
	
	ptrthis->next=ptrnew;	
	}
	printf("\nNode inserted at the end.");
}
void display()
{
	struct node*ptrthis;
	if(header==NULL)
	printf("\n list is empty,");
	else
	{
		printf("\nlist contains\n");
		for(ptrthis=header;ptrthis!=NULL;ptrthis=ptrthis->next)
		{
			printf("%d\t",ptrthis->data);
		}
	}
}
void main()
{
	struct node*header=NULL;//EMPTY LIST INITILIZED
	while(1)
	{
		clrscr();
		printf("select an oprtion:\n1. insertAtfront\n2. insertatlast\n3. insertAfter\n4. insert Before\n5. remove freom front\n6. remove from last\7. remove any\n8. list\n9. exit ");
		
		ch=getche();
		switch(ch)
		{
			case'1':break;
			case'2':insertAtlast();break;
			case'3':break;
			case'4':break;
			case'5':break;
			case'6':break;
			case'7':break;
			case'8': display();break;
			case'9':return;
			
		}
		getch();
	}
}

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
  struct node *prev;
};
struct node *header = NULL;
struct node *getnode(int n) {
  struct node *ptrnew = (struct node *)malloc(sizeof(struct node));
  if (ptrnew == NULL) {
    printf("\nMemory allocation failed.");
    _getch();
    exit(0);
  }
  ptrnew->data = n;
  ptrnew->next = ptrnew->prev = NULL;
  return ptrnew;
};

void insertAtFront() {
  struct node *ptrnew;
  int n;
  printf("\nEnter new number: ");
  scanf("%d", &n);
  ptrnew = getnode(n);
  if (header != NULL) {
    header = ptrnew;
  } else {
    ptrnew->next = header;
    header->prev = ptrnew;
  }
  header = ptrnew;
  printf("\nNode inserted at the front.");
}
void insertAtLast() {
  struct node *ptrnew, *ptrthis;
  int n;
  printf("\nEnter new nubmer: ");
  scanf("%d", &n);
  ptrnew = getnode(n);
  if (header == NULL) {
    header = ptrnew;
  } else {
    for (ptrthis = header; ptrthis->next != NULL; ptrthis = ptrthis->next);
    ptrthis->next=ptrnew;
    ptrnew->prev=ptrthis;
  }
  printf("\nNode inserted at the end.");
}
void  insertafter()
{
	struct node*ptrnew, *ptrthis;
	int n, target;
	printf("\nenter a node after which you want to insert: ");
	scanf("%d",&target);
	for(ptrthis=header;ptrthis!=NULL;ptrthis=ptrthis->next)
	{
		if(ptrthis->data==target)
		
		{
			printf("enter new number to be inserted.");
			scanf("%d",&n);
			ptrnew=getnode(n);
			ptrnew->next=ptrthis->next;
			ptrnew->prev=ptrthis;
			if(ptrthis->next!=NULL)
			(ptrthis->next)->prev=ptrnew;
			ptrthis->next=ptrnew;
			return;
		}
		
	}
	printf("target node not found.");
}
void insertBefore();
{
	struct node;*ptrnew,*ptrthis
	int n, target;
	printf("\nenter a node before which you want to insert:");
	scanf("%d",&target);
		for(ptrthis=header;ptrthis!=NULL;ptrthis=ptrthis->next)
		{
				if(ptrthis->data==target)
				{
	            	printf("enter new number to be inserted.");
			        scanf("%d",&n);	
					ptrnew=getnode(n);
					if(ptrthis==header)
					header=ptrnew;
					else
					{
						ptrnew->prev=ptrthis->prev;
						(ptrnew->prev)->next=ptrnew;
					}
					ptrnew->next=ptrthis;
					ptrnew->prev=ptrnew;
					printf("node inserted before %d.",target);
					return;
					
								
				}
				
		}
		printf("target node not found.");
	
}
void removefromfront()

{
struct node*ptrthis;
if(header==NULL)
printf("nothing to remove.");
else
{
ptrthis=header;
header=header->next;
if(header!=NULL)
header->prev=NULL;
free(ptrthis);
printf("node remove from front.");

	}	
}
void removefromlast()
{
	struct node*ptrthis;
	if(header==NULL)
	printf("\nlist is empty.")
	else
	{
		
	}
}















#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){

	int i=1,n,headval;
	struct node *a,*b,*head;
	printf("enter the no of nodes you want :");
	scanf("%d",&n);
	
	printf("enter the value of head node :");
	scanf("%d",&headval);

	b=(struct node*)malloc(sizeof(struct node));
	b->data=headval;
	b->next=NULL;
	head=b;
	a=head;

	for(i=1;i<n;i++)
	{	
		printf("enter the value of %d node :",i);
		scanf("%d",&headval);

		b=(struct node*)malloc(sizeof(struct node));
		b->data=headval;
		b->next=NULL;
	
		a->next=b;
		a=a->next;
	}
	a=head;
	
	while(a!=NULL)
	{
		printf("\t%d\n",a->data);
		a=a->next;
	}
return 0;
}

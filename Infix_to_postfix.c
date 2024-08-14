#include<stdio.h>
#include<stdlib.h>
void crenode(int);
void traverse();
struct node
{
	int data;
	struct node*next;
};
struct node*start;
void main()
{
	int choice,item;
	do
	{
	printf("1.append\n2.traverse\n3.exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the item:");
			scanf("%d",&item);
			crenode(item);
			break;
		case 2:
			traverse();
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("enter the choice");
	}
	}while(choice!=0);
    }
void crenode(int item)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("\noverflow");
	}
	else
	{
		ptr->data=item;
		ptr->next=start;
		start=ptr;
	}
}
void traverse()
{
	struct node*ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("empty");
	}
	else{
		printf("value print");
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
}

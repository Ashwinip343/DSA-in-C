#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
}*ptr;
struct node *head=NULL;
struct node *new1=NULL;

void create_list(int no){
	int i=0,d;
	while(i<no){
	new1=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&d);
	new1->data=d;
	new1->next=NULL;
	if(head==NULL){
		head=ptr=new1;}
	ptr->next=new1;
	ptr=new1;
	i++;
}
	ptr->next=head;
}
void traversal(){
	ptr=head;
	while(ptr->next!=head){
		printf("[%d|%u]-> ",ptr->data,ptr->next);
		ptr=ptr->next;
	}
	printf("[%d|%u]->",ptr->data,ptr->next);
}
/*void insert_front(){
	 int ele;
	 printf("Enter the data:");
	 scanf("%d",&ele);
	 ptr=head;
	 new1=(struct node *)malloc(sizeof(struct node));
	 if(new1==NULL){
		printf("Memory insufficient");}
	 new1->data=ele;
	 new1->next=head;
	 head=new1;
}
  */
void insert_end(){
	int ele;
	printf("Enter the element:");
	scanf("%d",&ele);
	new1=(struct node *)malloc(sizeof(struct node));
	if(new1==NULL){
		printf("Memory Insufficient");}
	ptr=head;
	while(ptr->next!=head){
		ptr=ptr->next;
	}
	ptr->next=new1;
	new1->data=ele;
	new1->next=head;

}
void insert_beforepos(){
	int ele,i=1,pos;
	printf("Enter the element:");
	scanf("%d",&ele);
	printf("Enter the position:");
	scanf("%d",&pos);
	new1=(struct node *)malloc(sizeof(struct node));
	if(new1==NULL){
		printf("Memory Insuficient");}
	ptr=head;
	while(i<pos-1){
		ptr=ptr->next;
		i++;}
	new1->data=ele;
       new1->next=ptr->next;
       ptr->next=new1;
}
void delete_front(){
	if(head==NULL) {
	printf("List is empty");}
	ptr=head;
	head=ptr->next;

}
void delete_afterpos(){
	int pos,i=1;
	if(head==NULL){
		printf("The List if empty");}

	printf("Enter the position:");
	scanf("%d",&pos);
	ptr=head;
	while(i<pos){
		ptr=ptr->next;
		i++;
	}
	ptr->next=ptr->next->next;
}


void main(){
	clrscr();
	int no;
	printf("Enter the number of nodes of linked list:");
	scanf("%d",&no);
	create_list(no);
	int ch;
	printf("SELECT\n1.Insert before position\n2.Insert at end\n3.Delete at front\n4.Delete after specific position\n OR 0 to EXIT\n" );
	while(ch!=0){
	 printf("Enter the choice:");
	 scanf("%d",&ch);
	 switch(ch){
	 case 0: printf("Program Exiting..");
		break;
	 case 1: insert_beforepos();
		break;
	 case 2: insert_end();
		break;
	 case 3:delete_front();
		break;
	 case 4: delete_afterpos();
		break;
	 case 5: traversal();
		break;

	 default:printf("Please enter the correct choice;");
	 }
	 }
	getch();
}


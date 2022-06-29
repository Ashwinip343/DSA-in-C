//Queue operations
#include<stdio.h>
int cq[10];
int f=-1,r=-1,n=5,count,i;
int enqueue(){
    int ele;
    printf("Enter the element:");
    scanf("%d",&ele);
        if((f==0 && r==n-1) || f==r+1){
            printf(" Circular Queue Overflow");}
        if(f==-1 && r==-1)
            f=r=0;
        else if(r=n-1 && f!=0)
            r=0;
        else
            r=r+1;
        cq[r]=ele;
        printf("%d\t%d",f,r);
        count++;
        return r;
}
int dequeue(){
    int val;
    if(f==-1)
        printf("Circular Queue Underflow");
    else{
        val=cq[f];
        if(f==r)
            f=r=-1;
        else if(f==-1)
            f=0;
        else
            f=f+1;
    printf("The deleted value is:%d", val);
    }
    return 0;
    
}

int display(){
    int i=f;
	if(f==-1 && r==-1)
	{
		printf("\n queue is empty");
	}
	else{
		printf("\n item in a queue are");
		while(i<=r){
			printf("%d\t",cq[i]);
			i=i+1;
		}
	}
	return 0;
}
int main(){
    int ch;
    
    printf("1.Queue\n2.Enqueue\n3.Traverse");
    while(ch!=0){
    printf("\nEnter choice or 0 to exit:");
    scanf("%d",&ch);
    switch(ch){
    case 0: printf("Program exiting.....");
    break;    
    case 1: enqueue();
        break;
    case 2: dequeue();
    break;
    case 3:display();
    break;
    default:printf("Please enter a correct choice:");
    
    }
    }
    return 0;
    
}

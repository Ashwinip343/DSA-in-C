//Queue operations
#include<stdio.h>
int q[10];
int f=-1,r=-1,n=10,i;
void enqueue(){
    int ele;
    printf("Enter the element:");
    scanf("%d",&ele);
        if(r==n-1){
            printf("Queue Overflow");}
        if(f==-1 && r==-1)
            f=r=0;
        else
            r=r+1;
        q[r]=ele;
}

void dequeue(){
    int val;
    if(f==-1)
        printf("Queue Underflow");
    else{
        val=q[f];
        if(f==r)
            f=r=-1;
        else
            f=f+1;
        printf("The deleted value is:%d", val);
    }
    
}
void peek(){
    printf("The top is %d at index %d",q[r],r);
    }
void dispaly(){
    for(int i=f;i<=r;i++){
        printf("%d\t",q[i]);
    }
}
void main(){
    int ch;
    
    printf("1.Queue\n2.Enqueue\n3.Peek\n4.Display");
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
    case 3: peek();
        break;
    case 3:display();
        break;
    default:printf("Please enter a correct choice:");
    
    }
    }
    return 0;
    
}


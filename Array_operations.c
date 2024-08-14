#include<stdio.h>
int a[10]={3,4,5};
int ub=2,lb=0,n=10,i;
int* insert(){
    int ele,pos;
    printf("Enter the element:");
    scanf("%d",&ele);
    printf("Enter the position:");
    scanf("%d",&pos);
    if (ub==n-1){
        printf("Overflow");
    }
    i=ub;
    while(i>=pos){
        a[i+1]=a[i];
        i--;
    }
    a[pos]=ele;
    ub+=1;
    return a;
}
void delete(){
    int pos;
    printf("Enter the position of element");
    scanf("%d",&pos);
    i=pos;
    while(i!=ub){
        a[i]=a[i+1];
        i++;
    }
    ub--;
    }

void traverse(){
    for(int i=0;i<=ub;i++){
        printf("%d\t",a[i]);
    }
}
void search(){
    int ele,i;
    printf("Enter the element:");
    scanf("%d",&ele);
    for(i=0;i<=ub;i++)
    {
        if (a[i]==ele){
            printf("Element found at position %d",i);
            break;}
        };
    if(i>ub){
        printf("Element not found");
    }
         }

    


int main(){
    int ch;
    
    printf("1.Insertion\n2.Deletion\n3.Traversal\n4.Search\n");
    while(ch!=0){
    printf("\nEnter choice or 0 to exit:");
    scanf("%d",&ch);
    switch(ch){
    case 0: printf("Program exiting.....");
    break;    
    case 1: insert();
        break;
    case 2: delete();
        break;
    case 3: traverse();
    break;
    case 4: search();
    break;
    default:printf("Please enter a correct choice:");
    
    }
    }
    return 0;
}

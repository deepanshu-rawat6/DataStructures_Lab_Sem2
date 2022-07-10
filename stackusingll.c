#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* top=NULL;
void push(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=top;
    top=temp;
    return;
}
void pop(){
    struct Node* temp;
    if(top==NULL){ printf("\nNo elements to pop!"); return;}
    temp=top;
    top=top->next;
    printf("\nThe popped element: %d",temp->data);
    free(temp);
    return;
}  
void display(){
    struct Node* temp;
    if(top==NULL){ printf("\nNo elements to display!"); return;}
    temp=top;
    printf("\nThe stack elements are:");
    while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    return;
}
int main(){
    top=NULL;
    int choice,i=0,x;
    printf("\nStack operations:");
    printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    do{
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                printf("\nEnter the value to be pushed:");
                scanf("%d",&x);
                push(x);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nExiting...");
                break;
            }
            default:
            {
                printf("\nPlease enter a valid choice(1/2/3)");
                break;
            }
        }
    }while(choice!=4);
    return 0;
}
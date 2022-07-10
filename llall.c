#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;    
};
struct Node* head=NULL;
void insert_at_beginning(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void insert_at_end(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=NULL;
    struct Node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void insert_at_nth_pos(int x,int n){
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node*));
    temp1->data=x;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }else{
        struct Node* temp2=head;
        for(int i=0;i<n-2;i++){
            temp2=temp2->next;
        }
        temp1->next=temp2->next;
        temp2->next=temp1;
    }
    return;
}
void delete_at_beginning(){
    struct Node* temp=head;
    if(head==NULL){
        printf("\nNo elements to delete!");
    }else{
        printf("\nThe deleted element is: %d",temp->data);
        head=head->next;
        free(temp);
    }
}
void delete_at_end(){
    struct Node *temp1,*temp2;  
    if(head == NULL) {  
        printf("\nList is empty");  
    }else if(head -> next == NULL){  
        printf("\nOnly one node is deleted: %d",head->data); 
        head=NULL;
        free(head); 
    }else{  
        temp1 = head;   
        while(temp1->next != NULL){  
            temp2 = temp1;  
            temp1 = temp1 ->next;
        }  
        temp2->next = NULL;  
        printf("\nDeleted Node from the last:%d",temp1->data);  
        free(temp1);
    }
    return;
}
void delete_at_nth_pos(int n){
    struct Node* temp1=head;
    if(n==1){
        head=temp1->next;
        printf("\nOnly one node is deleted:%d",temp1->data);
        free(temp1);
        return;
    }else{
        for(int i=0;i<n-2;i++){
            temp1=temp1->next;
        }
        struct Node* temp2=temp1->next;
        temp1->next=temp2->next;
        printf("Deleted node:%d",temp2->data);
        free(temp2);
    }
    return;
}
void display(){
    struct Node* temp=head;
    if(head==NULL){
        printf("\n No element to display!!");
    }else{
        printf("\n The list:");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    int choice,x,n;
    printf("\nThe linked list operations are:");
    printf("\n 1.Insert at Beginning\n 2.Insert at End\n 3.Insert at Nth position \n 4.Delete at beginnig\n 5.Delete at End\n 6.Delete at Nth position\n 7.Display \n 8.Exit\n");
    do
    {
        printf("\n\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("\n Enter the value:");
                scanf("%d",&x);
                insert_at_beginning(x);
                break;
            }
            case 2:
            {
                printf("\n Enter the value:");
                scanf("%d",&x);
                insert_at_end(x);
                break;
            }
            case 3:
            {
                printf("\n Enter the value:");
                scanf("%d",&x);
                printf("\n Enter the position:");
                scanf("%d",&n);
                insert_at_nth_pos(x,n);
                break;
            }
            case 4:
            {
                delete_at_beginning();
                break;
            }
            case 5:
            {
                delete_at_end();
                break;
            }
            case 6:
            {
                printf("\n Enter the position:");
                scanf("%d",&n);
                delete_at_nth_pos(n);
                break;
            }
            case 7:
            {
                display();
                break;
            }
            case 8:
            {
                printf("\nExiting...");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid Choice(1/2/3/4/5/6/7/8)");
            }
                 
        }
    }
    while(choice!=8);
    return 0;
}
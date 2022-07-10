#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void Insert(int value);
void Print();
void Delete(int n);
int main(){
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    int n;
    printf("Enter the position:");
    scanf("%d",&n);
    Delete(n);
    Print();
    return 0;
}
void Insert(int value){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL){
        temp->data=value;
        head=temp;
    }else{
        struct Node* ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        temp->data=value;
        temp->next=NULL;
        ptr->next=temp;
    }
}
void Print(){
    struct Node* ptr=head;
    if(head==NULL){
        printf("\nNo elements to display!");
    }else{
        printf("\nThe list: ");
        while(ptr->next!=NULL){
            printf("%d ",ptr->data);
        }
    }
}
void Delete(int n){
    struct Node* temp1=head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }else{
        for(int i=0;i<n-2;i++){
            temp1=temp1->next;
        }
        struct Node* temp2=temp1->next;
        temp1->next=temp2->next;
        free(temp2);
    }
}
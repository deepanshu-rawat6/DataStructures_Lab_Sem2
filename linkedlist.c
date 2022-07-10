#include<stdio.h>
#include<stdlib.h>
void insert(int);
void print();
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void insert(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print(){
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    } 
    printf("\n");
}
int main(){
    int n,i,x;
    printf("Enter the numbers\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number\n");
        scanf("%d",&x);
        insert(x);
        print();
    }
}
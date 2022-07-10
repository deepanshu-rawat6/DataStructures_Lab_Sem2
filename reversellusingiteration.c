#include<stdio.h>
#include<stdlib.h>
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
    return;
}
void display(){
    struct Node* temp=head;
    printf("\nThe list:");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return;
}
void reverse(){

}
int main(){
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    display();
    
    return 0;
}
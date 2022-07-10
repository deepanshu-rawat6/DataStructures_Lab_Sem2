#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int,int);
void delete();
void Print();
int main(){
    Insert(2,1);
    Print();
    Insert(3,2);
    Print();
    Insert(4,1);
    Insert(5,2);
    Insert(10,5);
    Insert(11,6);
    Print();
    delete();
    Print();
    return 0;
}
void Insert(int data,int n){
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node*));
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node* temp2=head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void Print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void delete()  
    {  
        struct Node *ptr,*ptr1;  
        if(head == NULL)  
        {  
            printf("\nlist is empty");  
        }  
        else if(head -> next == NULL)  
        {  
            head = NULL;  
            free(head);  
            printf("\nOnly node of the list deleted ...");  
        }  
              
        else  
        {  
            ptr = head;   
            while(ptr->next != NULL)  
                {  
                    ptr1 = ptr;  
                    ptr = ptr ->next;  
                }  
                ptr1->next = NULL;  
                free(ptr);  
                printf("\n Deleted Node from the last ...");  
            }     
        }  
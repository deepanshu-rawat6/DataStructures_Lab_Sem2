#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
    
struct node{  
    int data;  
    struct node *next;  
};  
   
struct node *head = NULL;  
struct node *tail = NULL;  
   
void add(int element){  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = element;  
    if(head == NULL){  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }else {  
        tail->next = newNode; 
        tail = newNode;  
        tail->next = head;  
    }  
}  
   
void display(){  
    struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{  
            printf("%d ", current->data);  
            current = current->next;  
        }while(current != head);  
        printf("\n");  
    }  
}  

void search(){
    struct node *current=head;
    int count=0;
    do{
        if(current==NULL){
            return;
        }
        if(current->data==1){
            count++;
        }
        current=current->next;
    }while(current!=head);
    printf("\n The occurance of 1: %d\n ",count);
}



void insertAt1st1(int data)
{
    struct node *newNode, *current;
    int i,c=0,k=1;
    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        current = head;
        do{
            c=(current->data==1)?c++:c;
            if(c==k){
                break;
            }
        }while(current!=head);
        newNode->next = current->next;
        current->next = newNode;

    }
}

int main()  
{   
   add(2);  
   add(5);  
   add(1);  
   add(6);  
   add(8);  
   add(5);  
   add(4);  
   add(1);
   add(9);  
   display();
   search();  
   insertAt1st1(7);
   display();
     
   return 0;  
}  
#include<stdio.h>
#include<stdbool.h>
#define MAX 5
int QUEUE[MAX];
int FRONT=-1,REAR=-1;
void enqueue(int);
bool isEmpty();
bool isFull();
void dequeue();
void display();
int main(){
    int choice;
    printf("\n1. Enqueue \n2. Dequeue \n3. For displaying the queue elements \n4. Exit");
    do{
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                int x;
                printf("\nEnter the element to be inserted in queue:");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting...");
                break;
            default:
                printf("\nINVALID INPUT!!");
                break;
        }
    }while(choice!=4);
    return 0;
}
bool isEmpty(){
    if(FRONT==-1 && REAR==-1){
        return true;
    }
    return false;
}
bool isFull(){
    if(REAR==MAX-1){
        return true;
    }
    return false;
}
void enqueue(int x){
    if(isFull()){
        printf("\nOVERFLOW!");
        return;
    }else if(isEmpty()){
        FRONT=REAR=0;
    }else{
        REAR++;
    }
    QUEUE[REAR]=x;
}
void dequeue(){
    int val;
    if(isEmpty()){
        printf("\nUNDERFLOW!");
        return;
    }else if(FRONT==REAR){
        val=QUEUE[FRONT];
        FRONT=REAR=-1;
    }else{
        val=QUEUE[FRONT++];
    }
    printf("\nPopped element:%d",val);
}
void display(){
    int i;
    if(isEmpty()){
        printf("\nNO ELEMENTS TO DISPLAY!!");
    }
    printf("\nThe QUEUE elements are:");
    for(i=FRONT;i!=REAR+1;i++){
        printf("%d ",QUEUE[i]);
    }
    printf("\n");
    return;
}

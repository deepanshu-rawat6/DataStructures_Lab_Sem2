#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100

struct lifo{
    int st[MAXSIZE];
    int top;
};
typedef struct lifo stack;
struct s;
void create(stack *s){
    s->top=-1;
}
void push(stack *s,int element){
    if(s->top==(MAXSIZE-1)){
        printf("\nStack Overflow");
        exit(-1);
    }else{
        s->top++;
        s->st[s->top]=element;
    }
}
int pop(stack *s){
    if(s->top==-1){
        printf("\nStack Underflow");
        exit(-1);
    }else{
        return (s->st[s->top--]);
    }
}
int main(){
    int n,t;
    create(s);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\nEnter the element:");
        scanf("%d",&t);
        push(s,t);
    }
    printf("\nThe last element is:%d",pop(s));
}
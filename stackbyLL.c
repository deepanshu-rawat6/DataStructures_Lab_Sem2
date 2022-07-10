struct lifo{
    int value;
    struct lifo *next;
};
typedef struct lifo stack;
stack *lifo;
void create(stack **top){
    *top=NULL;
}
void push(stack **top,int element){
    stack *new;
    new=(stack *)malloc(sizeof(stack));
    if(new==NULL){
        printf("\nNo memory is allocated");
        exit(-1);
    }
    new->value=element;
    new->next=*top;
    *top=new;
}
int pop(stack **top){
    int t;
    stack *p;
    if(*top==NULL){
        printf("\nStack is empty");
        exit(-1);
    }else{
        t=(*top)->value;
        p=*top;
        *top=(*top)->next;
        free(p);
        return t;
    }
}
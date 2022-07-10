#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *head = NULL;
void add(int x)
{ // insertion of element in the begining!
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->value = x;
    temp->next = head;
    head = temp;
}
void print_list()
{
    struct node *temp = head;
    printf("\nThe list:");
    while (temp != NULL)
    {
        printf(" %d", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
void insert(int position,int x){
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    temp->value=x;
    struct node *ptr=head;
    if(position==1){
        temp->next=ptr;
        head=temp;
        return;
    }
    for(int i=1;i<position-1;i++){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}
int main()
{
    int n, x,pos;
    head = NULL;
    printf("\nEnter how many numbers?:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the number:");
        scanf("%d", &x);
        add(x);
        x = 0;
    }
    print_list();
    printf("\nEnter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("\nEnter the element:");
    scanf("%d",&x);
    insert(pos,x);
    print_list();
}
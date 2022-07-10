#include<stdio.h>
#include<string.h>
union product{
    char p_name[100];
    float ppu;
    int nou;
};
int main(){
    union product var;
    char name[100];
    float price;
    int no;
    printf("\n The size occupied by the union Product:%d",sizeof(var));
    printf("\n");
    printf("\nEnter the product name:");
    gets(name);
    printf("\nEnter the price of a single unit(in ₹₹₹):");
    scanf("%f",&price);
    printf("\nEnter the no of items you want to buy:");
    scanf("%d",&no);
    printf("\n");
    printf("Displaying the product information....");
    strcpy(var.p_name, name);
    printf("\nProduct name: %s",var.p_name);
    var.ppu=price;
    printf("\nPrice of a single unit: %.2f",var.ppu);
    var.nou=no;
    printf("\nNumber of units: %d",var.nou);
    printf("\nTotal amount to be paid: %.2f",price*(float)var.nou);
    return 0;
}

#include<stdio.h>
#include<string.h>
#define MAX 10
char QUEUE[MAX];
int FRONT=-1,REAR=-1;

void push(char ch){
    QUEUE[REAR++]=ch;
}
char pop(){
    return QUEUE[FRONT++];
}
void palindrome(char str[]){
    int len=strlen(str);
    int i;
    for(i=0;i<(len/2);i++){
        push(str[i]);
    }
    i=0;
    while(i<(len/2)){
        char chr=pop();
        if(chr!=str[len-i-1]){
            printf("\n%s is not a palindrome string",str);
            return;
        }
        i++;
    }
    printf("\n%s is a palindrome string",str);
}
int main(){
    char str[MAX];
    printf("\nEnter the string:");
    scanf("%s",&str);
    palindrome(str);
    return 0;
}
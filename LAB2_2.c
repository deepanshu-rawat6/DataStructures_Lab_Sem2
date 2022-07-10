#include<stdio.h>
#include<stdlib.h>
struct subject{
  char sub_name[100];
  int sub_code;
}*sub;
int main(){
  int n,m;
  printf("\nEnter the number of students:");
  scanf("%d",&m);
  for(int k=0;k<m;k++){
    printf("\nDetails of Student %d",k+1);
    printf("\nEnter the number of subjects whose details have to be stored  : ");
    scanf("%d",&n);
    sub = (struct subject*)malloc(n*sizeof(struct subject));
    for(int i=0;i<n;i++){
      printf("\n Enter the details of the subject %d ",i+1);
      printf("\n Enter the name of the subject : ");
      while(getchar()!='\n');
      fgets((sub+i)->sub_name,100,stdin);
      printf(" Enter the code of the subject : ");
      scanf("%d",&(sub+i)->sub_code);
    }
    printf("\n\tSubject Records");
    for(int i=0;i<n;i++){
      printf("\n\tSubject %d\n\tName = %s",i+1,(sub+i)->sub_name);
      printf("\tSubject code = %d\n",(sub+i)->sub_code);
    }
  }
  return 0;
}
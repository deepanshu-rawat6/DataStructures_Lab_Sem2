#include <stdio.h>
#include<stdlib.h>

int main()
{
int A[]={900,880,870,850,300,100};
int l=0;
int r=5;
int mid=0;
int d;
printf("enter data to be searched:");
scanf("%d",&d);
while(l<=r)
{
    mid=(l+r)/2;
    if(A[mid]==d)
    {
        printf("desired index is: %d",mid+1);
        exit(0);
    }
    else if(A[mid]<d)
    {
        l=mid+1;
    }
    else
    {
        r=mid-1;
    }
}
printf("data not found!");

    return 0;
}
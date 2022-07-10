#include<stdio.h>
int sum(int a[],int n){
    if(n<=0){
    	return 0;
    }
    return a[n-1]+sum(a,n-1);
}
int main(){
    int n;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf(" Enter the array elements:");
    for (int i = 0; i < n; ++i)
    {
    	scanf("%d",&a[i]);
    }
    printf("\n The sum of the array elements: %d",sum(a,n));
    return 0;
}

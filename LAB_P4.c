#include<stdio.h>
int sort(int arr[],int len){ //bubble sort
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elemenets:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("\nSmallest element: %d",arr[0]);
    printf("\nLargest element: %d",arr[n-1]);
}

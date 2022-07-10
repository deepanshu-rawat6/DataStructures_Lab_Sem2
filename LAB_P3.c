#include<stdio.h>
#include<stdbool.h>
int search(float arr[],int lb,int ub,float target){
    bool isDec=arr[lb]>arr[ub];
    while(lb<=ub){
        int mid=lb+(ub-lb)/2;
        if(arr[mid]==target){
           return mid;
        }
        if(isDec==false){
            if(arr[mid]>target){
                ub=mid-1;
            }else{
                lb=mid+1;
            }
        }else{
            if(arr[mid]>target){
                lb=mid+1;
            }else{
                ub=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    float target;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    float arr[n];
    printf("\nEnter the array elements in either Ascending or Descending order:");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    printf("\nEnter the target element:");
    scanf("%f",&target);
    int ans=search(arr,0,n-1,target);
    if(ans!=-1){
        printf("\nTarget element is found at %dth position",ans+1);
    }else{
        printf("\nTarget element not found!");
    }
    return 0;
}
#include<stdio.h>
#include<stdbool.h>
int BS(int arr[],int lb,int ub,int target){
    bool isDec=arr[lb]>arr[ub];
    while(lb<=ub){
        int mid=lb+(ub-lb)/2;
        if(arr[mid]==target){
           return mid+1;
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
int LS(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int choice,n,i,target,x;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter your choice:");
    printf("\n1. Linear Search\n2. Binary Search\n3. Quit");
    do{
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        if(choice!=3){
            printf("\nEnter the target element:");
            scanf("%d",&target);
        }
        switch(choice){
            case 1:
                x=LS(arr,target,n);
                if(x!=-1){
                    printf("\nTarget element is present at %dth position",x);
                }else{
                    printf("\nTarget element not found!");
                }
                break;
            case 2:
                x=BS(arr,0,n-1,target);
                if(x!=-1){
                    printf("\nTarget element is present at %dth position",x);
                }else{
                    printf("\nTarget element not found!");
                }
                break;
            case 3:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid Choice!");
                break;
        }
    }while(choice!=3);
    return 0;
}
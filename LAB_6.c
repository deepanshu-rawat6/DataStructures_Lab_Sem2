#include<stdio.h>
void BS(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return;
}
void SS(int arr[], int n)  
{  
    int i, j, small;  
    for (i = 0; i < n-1; i++){  
        small = i;  
        for (j = i+1; j < n; j++){ 
            if (arr[j] < arr[small]) {
                small = j;
            }
        }
        int temp = arr[small];  
        arr[small] = arr[i];  
        arr[i] = temp;  
    }
}  
void IS(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<=arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    return;
}
void PRINT(int arr[],int n){
    printf("\n[ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("]\n");
    return;
}
void QS(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int s=low;
    int e=high;
    int m=s+(e-s)/2;
    int pivot=arr[m];

    while(s<=e){
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }

        if(s<=e){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
    }
    QS(arr,low,e);
    QS(arr,s,high);
}
int main(){
    int n,choice;
    int arr[n];
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\n1. Bubble sort\n2. Selection sort\n3. Insertion sort\n4. Quick sort\n5. Exit form the program:");
    do{
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        if(choice!=5){
            printf("\nEnter the array elements:");
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
        }
        switch(choice){
        case 1:
            printf("\nBubble Sort:");
            BS(arr,n);
            PRINT(arr,n);
            break;
        case 2:
            printf("\nSelection Sort:");
            SS(arr,n);
            PRINT(arr,n);
            break;
        case 3:
            printf("\nInsertion Sort:");
            IS(arr,n);
            PRINT(arr,n);
            break;
        case 4:
            printf("\nQuick Sort:");
            QS(arr,0,n-1);
            PRINT(arr,n);
            break;
        case 5:
            printf("\nExiting...");
            break;
        default:
            printf("\nInvalid Choice!");
            break;
        }
    }while(choice!=5);
}


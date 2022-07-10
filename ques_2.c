#include<stdio.h>
void insert(int*,int);
void delete(int*,int);
int main(){
    int n;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[100];
    printf("\n Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int choice;
    printf("Enter 1 for insertion and 2 for deletion:");
    scanf("%d",&choice);
    if(choice==1){
        insert(arr,n);
    }else{
        delete(arr,n);
    }
    return 0;
}
void insert(int arr[],int n){
    int insert_index;
    int a;
    printf("\n Enter the insert index:");
    scanf("%d", &insert_index);
    printf("\n Enter the element to be inserted:");
    scanf("%d", &a);
    for (int i = n - 1; i >= insert_index - 1; i--){    
        arr[i+1] = arr[i];
    }
    arr[insert_index-1] = a;
    printf("\n Array after the operation is:");
    for (int i = 0; i <= n; i++){ 
        printf("%d ", arr[i]);    
    }
}
void delete(int arr[],int n){
    int delete_index;
    int a;
    printf("\n Enter the delete index:");
    scanf("%d", &delete_index);
    if(delete_index>n || delete_index<0){
        printf("\n Operation cannot be performed!");
    }
    else{
        for (int i =delete_index-1; i <n-1; i++){    
            arr[i] = arr[i+1];
        }
        printf("\n Array after the operation is:");
        for (int i = 0; i < n-1; i++){ 
            printf("%d ", arr[i]);    
        }
    }
}
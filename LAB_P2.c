#include<stdio.h>
int main(){
    int m,n;
    printf("\nEnter the number of rows:");
    scanf("%d",&m);
    printf("\nEnter the number of columns:");
    scanf("%d",&n);
    int arr[m][n];
    int checko=(m*n)/2;
    int c=0;
    printf("\nEnter the array elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                c++;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if(c>checko){
        printf("\nThe given matrix is a Sparse Matrix");
    }else{
        printf("\nThe given matrix is not a Sparse Matrix");
    }
    return 0;
}
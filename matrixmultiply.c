#include<stdio.h>
int main(){
    int n,i,j,k ;
    printf("\n Enter the size of the matrix, in nXn:");
    scanf("%d",&n);
    int arr1[n][n];
    int arr2[n][n];
    int ans[n][n];
    printf("\n Enter the elements in the first matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n Enter the elements in the second matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<n ; i++){
        for(j=0;j<n;j++){
            ans[i][j]=0;
            for(k=0;k<n;k++){
                ans[i][j]+=(arr1[i][k]*arr2[k][j]);
            }
        }
    }
    printf("\n The muliplication of the matrices is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
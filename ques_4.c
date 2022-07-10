#include<stdio.h>
int main(){
    int r,c,sumr=0,sumc=0;
    printf("Enter the rows and columns of the matrix:");
    scanf("%d",&r);
    scanf("%d",&c);
    int num[r][c];
    printf("\n Enter the array elements:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&num[i][j]);
        }
    }
    printf("\nThe Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",num[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sumr+=num[i][j];
        }
        printf("\nThe sum of %d row is: %d",i+1,sumr);
        sumr=0;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sumc+=num[j][i];
        }
        printf("\nThe sum of %d column is: %d",i+1,sumc);
        sumc=0;
    }
    return 0;
}

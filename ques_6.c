    #include<stdio.h>
    int search(float*,int,float);
    int main(){
        int n;
        float target;
        printf("\n Enter the size of the array:");
        scanf("%d",&n);
        float num[n];
        printf("\n Enter the array elements:");
        for(int i=0;i<n;i++){
            scanf("%f",&num[i]);
        }
        printf("\n Enter the target element:");
        scanf("%f",&target);
        int val=search(num,n,target);
        if(val==-1){
            printf("\n Search element not found!!");
        }else{
            printf("\n Target element found at %dth position",val);
        }
        return 0;
    }
    int search(float num[],int n,float target){
        for(int i=0;i<n;i++){
            if(target==num[i]){
                return i+1;
            }
        }
        return -1;
    }
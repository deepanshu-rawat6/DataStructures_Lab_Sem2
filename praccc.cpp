#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,sum=0,n,i=1;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<"The Fibonacci Series:"<<endl;
    cout<<a<<' '<<b;
    while(i<=n-2){
        sum=a+b;
        cout<<' '<<sum;
        a=b;
        b=sum;
        i++;
    }
    return 0;
}
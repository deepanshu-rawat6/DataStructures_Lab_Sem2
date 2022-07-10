#include<bits/stdc++.h>
using namespace std;
void sort(int *,int);
void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
void solve(){
    static int k=1;
    int n,b,sum=0,c=0;
    cin>>n>>b;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>b){
            break;
        }
        c++;
    }
    cout<<"Case #"<<k<<": "<<c<<endl;
    k++;
}


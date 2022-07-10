#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll[] solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll arr[]=solve();
        cout<<arr[0]<<" "<<arr[1]<<"\n";
    }
    return 0;
}
ll[] solve(){
    ll a,b,sum=0,min=0;
    cin>>a>>b;
    for(ll i=a;i<=(b/2);++i){
        for (ll j = 1; j <= b; ++j){
            if(gcd(i,j)>1){
                return int arr[]={i,j};
            }
        }
    }
}
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
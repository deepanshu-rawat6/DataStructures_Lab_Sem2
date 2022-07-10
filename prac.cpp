#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll k=0;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
void solve(){
	ll n,i,j,temp=0,c=0;
	cin>>n;
	ll arr[n],arr1[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
		arr1[i]=arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++){
		if(arr1[i]!=arr[i]){
			c++;
		}
	}
	if((c/2)>1){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
	return;
}

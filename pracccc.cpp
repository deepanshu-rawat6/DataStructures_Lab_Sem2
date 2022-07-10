    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
            int c=0;
            if(t>100 ||t<1){
                exit(0);
            }
            while(t!=0){
                int n,k,x;
                cin>>n>>k>>x;
                if(x>k){
                    cout<<-1<<endl;
                }else{
                    c=0;
                    for(int i=0;i<n;i++){
                        if(c==x)
                            c=0;
                        cout<<c<<" ";
                        c++;
                    }
                    cout<<"\n";
                }
                t--;
            }
        return 0;
    }
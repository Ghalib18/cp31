#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        bool flag=false;
        int ans=0;
        for(auto x:s){
            if(x=='.'){
                cnt++;
                if(cnt==3){
                    flag=true;
                    break;
                }
            }
            else {
                ans+=cnt;
                cnt=0;
            }
        }
        if(flag||cnt==3) cout<<2<<endl;
        else cout<<(ans+cnt)<<endl;

    }
    return 0;
}
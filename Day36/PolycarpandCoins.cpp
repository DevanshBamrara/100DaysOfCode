#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%3==0){
            int ans = n/3;
            cout<<ans<<" "<<ans<<"\n";
        }
        else if(n%3==1){
            int ans = n/3;
            cout<<ans+1<<" "<<ans<<"\n";
        }
        if(n%3==2){
            int ans = n/3;
            cout<<ans<<" "<<ans+1<<"\n";
        }
    }
}
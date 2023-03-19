#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=0,b=0;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            if(val%2==0){
                m+=val;
            }
            else{
                b+=val;
            }
        }
        if(m>b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
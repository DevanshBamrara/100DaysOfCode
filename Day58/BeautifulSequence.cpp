// A. Beautiful Sequence
// https://codeforces.com/contest/1810/problem/A 
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, c=0;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            if(i>=a[i]){
                cout<<"YES\n";
                c = 1;
                break;
            }
        }
        if(c==0){
            cout<<"NO\n";
        }
    }
}
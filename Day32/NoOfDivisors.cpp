#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c=2;
        cin>>n;
        for(int i=2;i<n;i++){
            if(n%i==0){
                c++;
            }
        }
        cout<<c<<"\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    int c=0,j=0;
    for(int i=s.size()-1;i>=0;i--){
        if(t[i]!=s[j++]){
            cout<<"NO";
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"YES";
    }
}
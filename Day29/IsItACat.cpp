#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c=0,i,exit=0;
        cin>>n;
        string s,m="meow",t;
        cin>>s;
        
        for(i=0;i<n;i++){
            if(tolower(s[i])==m[c]){
                if(tolower(s[i+1])!=m[c]){
                    t[c]=tolower(s[i]);
                    c++;
                    
            }
            }
            else{
                cout<<"NO\n";
                exit=1;
                break;
            }
        }
        if(exit!=1){
            if(c>=4){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
            }
        }
        
    }
}
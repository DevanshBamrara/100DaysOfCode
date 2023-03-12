#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s,t;
    cin>>s;
    t=s;
    int l=0,u=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            u++;
        }
        else if(islower(s[i])){
            l++;
        }
    }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(t.begin(),t.end(),t.begin(),::toupper);
    if(u==l){
        cout<<s;
    }
    else if(u<l){
        cout<<s;
    }
    else if(u>l){
        cout<<t;
    }
}
#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    int c=1,m=INT_MIN;
    for(int i = 0;i<s.length();i++){
        if(s[i]==s[i+1]){
            c+=1;
        }
        else{
            m = max(c,m);
            c = 1;
        }
    }
    if(m>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

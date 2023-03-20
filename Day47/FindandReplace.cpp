#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<bool> ev(26),od(26);
        for(int i=0;i<s.size();i++){
            if(i%2==1){
                od[s[i]-'a']=true;
            }
            else{
                ev[s[i]-'a']=true;
            }
        }
        bool val = true;
        for(int i=0;i<26;i++){
            if(od[i]&&ev[i])
                val = false;
        }
        cout<<(val?"YES\n":"NO\n");
    }
}
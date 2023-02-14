//Do Not Be Distracted!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    set<char> a;
    a.insert(s[0]);
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            auto it = a.find(s[i]);  
            if ( it == a.end() ) {  
            // not found  
            a.insert(s[i]);
            }   
            else {  
            // found  
            cout <<"NO"<< endl;  
            c = 1;
            break;
            }  
        }
    }
    if(c==0)
    cout<<"YES"<< endl;
    }
    return 0;
}

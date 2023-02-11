#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    for(int j=0;j<n;j++){
        string s;
        cin>>s;
        c = 0;
        if((s.length())%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            int h=s.length()/2;
            for(int i = 0;i<h;i++){
                if(s[i]!=s[h+i]){
                    c = 1;
                }
            }
            if(c==0){
                    cout<<"YES"<<endl;
                }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
}

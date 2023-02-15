#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int l,b,m;
    cin>>l>>b;
    m = min(max(2*l,b),max(2*b,l));
    cout<<m*m<<"\n";
    }
    return 0;
}

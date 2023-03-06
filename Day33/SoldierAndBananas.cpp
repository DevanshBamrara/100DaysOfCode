#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long k,n,w;
    cin>>k>>n>>w;
    long long t=0;
    for(int i=1;i<=w;i++){
        t += k*i; 
    }
    (n-t>=0)?cout<<"0":cout<<t-n;
}
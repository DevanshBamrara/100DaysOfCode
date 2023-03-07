#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        if(n%10!=0){
            n-=1;
        }
        else{
            n/=10;
        }
    }
    cout<<n;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long n,k=0,ans=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ans = a[i] - a[i+1];
            a[i+1]+=ans;
            k+=ans;
        }
    }
    cout<<k;
}
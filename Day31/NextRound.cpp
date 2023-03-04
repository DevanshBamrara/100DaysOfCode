#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if((a[k-1]<=a[i])&&a[i]>0){
            c++;
        }
    }
    cout<<c;
}
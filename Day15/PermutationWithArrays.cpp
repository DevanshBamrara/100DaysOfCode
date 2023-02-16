#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s = sizeof(a) / sizeof(a[0]);
    sort(a,a+s);
    sort(b,b+s);
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            c++;
        }
    }
    if(c==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
} 
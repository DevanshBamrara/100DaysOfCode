#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n,h=0;
    cin>>n;
    int a[n];
    h = n/2;
    if(h%2!=0){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        for(int i=0;i<h;i++){
            a[i]=2*(i+1);
            a[h+i]=(2*(i+1))-1;
        }
        a[n-1]+=h;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }    
    }
    }
    return 0;
}
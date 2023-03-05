#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    if(n==1)
    cout<<1;
    else if(n==2||n==3)
    cout<<"NO SOLUTION";
    else if(n==4){
        cout<<"2 4 1 3";
    }
    else if(n%2==0){
        int t = n;
        for(int i=0;i<n;i++){
            a[i]=t;
            t-=2;
            if(t==0){
                t=n-1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    else{
 
        int t = n;
        for(int i=0;i<n;i++){
            a[i]=t;
            t-=2;
            if(t==-1){
                t=n-1;
            }
        }
 
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    
 
}
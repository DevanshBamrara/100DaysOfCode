#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,o=0,e=0;
    cin>>n; 
        for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    if((o+e)%2!=0){
        cout<<"-1"<<"\n";
    }
    else if(e==o){
        cout<<0<<"\n";
    }
    else if(o==n||e==n){
        int h = n/2;
        cout<<h<<"\n";
    }
    else {
        cout<<abs(o-e)/2<<endl;
    }
    }
    return 0;
} 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int one = n%2, two = n/2;
    while(abs(two - one)>1)
    two--,one+=2;

    if(one>two){
        cout<<1;
        for(int i=0;i<two;i++){
            cout<<2<<1;
        }
    }
    else if(two>one){
        cout<<2;
        for(int i=0;i<one;i++){
            cout<<1<<2;
        }
    }
    else{
        for(int i=0;i<one;i++){
            cout<<2<<1;
        }
    }
    cout<<endl;
    }
    
    return 0;
} 
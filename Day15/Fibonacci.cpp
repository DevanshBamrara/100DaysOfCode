#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a=0,b=1,s=0;
    cin>>n;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else{
        for(int i=3;i<=n;i++){
            s = a + b;
            a = b;
            b = s;
        }
        cout<<s;
    }
    return 0;
} 
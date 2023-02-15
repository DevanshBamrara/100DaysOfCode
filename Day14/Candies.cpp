#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k,x,i=2;
    cin>>n;
    k = 1+2;
    while(true){
        if(n%k==0){
            x = n/k;
            break;
        }
        k += pow(2,i++);
    }
    cout<<x<<"\n";
    }
    
    return 0;
}

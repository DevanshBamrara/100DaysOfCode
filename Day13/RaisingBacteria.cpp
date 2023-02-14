#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,b=1;
    cin>>n;
    while(n!=0){
        if(n==1){
            break;
        }
        else if(n%2==0){
            n = n/2;
        }
        else if(n%2!=0){
            n = n - 1;
            b++;
        }
    }
    cout<<b;
    
    return 0;
}

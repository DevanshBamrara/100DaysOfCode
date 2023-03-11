#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    while(n!=0){
        if(n>=5){
            sum++;
            n-=5;
        }
        else if(n>=4){
            sum++;
            n-=4;
        }
        else if(n>=3){
            sum++;
            n-=3;
        }
        else if(n>=2){
            sum++;
            n-=2;
        }
        else if(n>=1){
            sum++;
            n-=1;
        }
    }
    cout<<sum;
}
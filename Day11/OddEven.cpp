#include<iostream>
using namespace std;

int main(){

    long long n,k,o,e;
    cin>>n>>k;
    if(n%2==0){
        e=n/2;
        if(k<=e){
            cout<<(k*2)-1;
        }
        else{
            cout<<(k-(e))*2;
        }
    }
    else{
        e=(n/2)+1;
        if(k<=e){
            cout<<(k*2)-1;
        }
        else{
            cout<<(k-(e))*2;
        }
    }

}
#include<iostream>
using namespace std;

int main(){
    int n, first = 0;
    cin>>n;
    while(n!=0){
        first = n%10;
        n = n/10;
    }
    if(first%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }
}
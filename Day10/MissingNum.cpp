#include<iostream>

using namespace std;
int main(){
    long long n,sum=0,sum1=0;
    cin>>n;
    sum = n*(n+1)/2;
    for(int i=1;i<n;i++){
        int num;
        cin>>num;
        sum1 += num;
    }
    cout<<sum-sum1;
}

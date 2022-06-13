#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        sum = sum + i;
    }
    cout<<"sum of numbers till "<<num<<" = "<<sum;
    return 0;
}
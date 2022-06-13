#include<iostream>
using namespace std;

int main(){
     int num, i, sum = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;

    while(num){
        int dig;
        dig = num % 10;
        cout<<dig<<" ";
        num = num/10;
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
     int num, i, sum = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;

    for(i=2;i<=num/2;i++){
        if(num%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
    }
    if((num/2)+1 == i){
        cout<<"its a prime number";
    }
    return 0;
}
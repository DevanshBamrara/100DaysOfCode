#include<iostream>
using namespace std;

int main(){
     int num, i, sum = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            sum = sum + i;
        }
    }
    if(sum == num*2){
        cout<<"It's a perfect number.";
    }
    else {
        cout<<"Not a perfect number.";
    }
    return 0;
}
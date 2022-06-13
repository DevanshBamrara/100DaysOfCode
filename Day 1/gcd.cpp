#include<iostream>
#include<math.h>
using namespace std;

int main(){
     int num1, num2;
    cout<<"Enter two number"<<endl;
    cin>>num1>>num2;

    while(num1!=num2){
        if(num1>num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    cout<<num1;
    return 0;
}
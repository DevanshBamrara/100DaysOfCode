#include<iostream>
using namespace std;

int main(){
    char num;
    cin>>num;

    if(num>=48 && num<=57){
        cout<<"IS DIGIT";
    }
    else if(num>=65 && num<=90){
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL";
    }
    else if(num>=97 && num<=122){
        cout<<"ALPHA"<<"\n"<<"IS SMALL";

    }
}
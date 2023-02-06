#include<iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;

    if(marks >= 0 && marks < 30){
        cout<<"D";
    }
    else if(marks >= 30 && marks < 65){
        cout<<"C";
    }
    else if(marks >= 65 && marks < 90){
        cout<<"B";
    }
    else if(marks >= 90 && marks <= 100){
        cout<<"A";
    }
    else{
        cout<<"Error";
    }
}
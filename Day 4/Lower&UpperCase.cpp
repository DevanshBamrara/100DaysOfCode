#include<iostream>
using namespace std;

int main(){
    char num;
    cin>>num;
    
    if(num>=65 && num<=90){
        cout<<char(num+32);
    }
    else if(num>=97 && num<=122){
        cout<<char(num-32);

    }
}
#include<iostream>
using namespace std;

int main(){
    int age, year = 0, month = 0, days = 0;
    cin>>age;
    year = age/365;
    month = (age%365)/30;
    days = (age%365)%30;
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days"<<endl;
}
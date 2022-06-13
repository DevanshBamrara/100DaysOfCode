#include<iostream>
using namespace std;

int main(){
    int num, i, fac=1;
    cout<<"Enter a number"<<endl;
    cin>>num;

    for(i=1;i<=num;i++){
        fac = fac*i;
    }
    cout<<"Factorial is : "<<fac<<endl;
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

int main(){
     int num, i = 1, rev = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;

    while(num){
        int dig;
        dig = num % 10;
        rev = rev*10 + dig;
        num = num/10;
    }
    cout<<rev;
    
    return 0;
}
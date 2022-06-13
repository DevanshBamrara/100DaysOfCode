#include<iostream>
#include<math.h>
using namespace std;

int main(){
     int num, i = 1, rev = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int temp = num;
    while(num){
        int dig;
        dig = num % 10;
        rev = rev*10 + dig;
        num = num/10;
    }
    if(temp == rev){
        cout<<"It's Palamdrome Number.";
    }
    else{
        cout<<"It's Not A Palamdrome Number.";
    }
    
    return 0;
}
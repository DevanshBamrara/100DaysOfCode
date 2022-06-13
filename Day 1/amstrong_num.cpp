#include<iostream>
#include<math.h>
using namespace std;

int main(){
     int num, i, count = 0, temp, sum = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    temp = num;

     while(temp){
        int dig;
        dig = temp % 10;
        temp = temp/10;
        count++;
    }
    temp = num;
    while(num){
        int dig;
        dig = num % 10;
        num = num/10;
        sum = sum + round(pow(dig,count));
    }
    if(temp == sum){
        cout<<"It's Amstrong Number.";
    }
    else{
        cout<<"It's Not A Amstrong Number.";
    }
    
    return 0;
}
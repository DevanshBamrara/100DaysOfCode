#include<iostream>
using namespace std;

int main(){
   int n,odd=0,even=0,pos=0,neg=0;
   cin>>n;
   int a[n];
   for(int i = 0;i <n; i++){
       cin>>a[i];
       if(a[i]%2==0){
           even++;
       }
       if(a[i]%2!=0){
           odd++;
       }
       if(a[i]>0){
           pos++;
       }
       if(a[i]<0){
           neg++;
       }
   }
   cout<<"Even: "<<even<<endl;
   cout<<"Odd: "<<odd<<endl;
   cout<<"Positive: "<<pos<<endl;
   cout<<"Negative: "<<neg<<endl;
}
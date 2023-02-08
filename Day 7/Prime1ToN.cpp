#include<iostream>
#include <cmath>
using namespace std;

int main(){
       int n,num,flag;
       cin>>num;
       for(n = 2;n<=num;n++){
       flag =0;
       for(int i = 2; i<=sqrt(n);i++){
        if(n%i==0){
          flag = 1;
          break;
        }
       }
       if(flag == 0){
        cout<<n<<" ";
       }
}
}
#include<iostream>
using namespace std;

int main(){
        int n,a=0,d=0;
        string str;
        cin>>n;
        cin>>str;
        for(int i = 0; i < n; i++){
          if(str[i]=='A'){
            a++;
          }
          if(str[i]=='D'){
            d++;
          }
        }
        if(a>d){
          cout<<"Anton";
        }
        else if(d>a){
          cout<<"Danik";
        }
        else if(a==d){
          cout<<"Friendship";
        }
 
   
}
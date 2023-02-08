#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n; 
  long long num, max = INT_MIN;   
  while(n--){
    cin>>num;
    if(num>max){
      max = num;
    }
  }
  cout<<max; 
  
}
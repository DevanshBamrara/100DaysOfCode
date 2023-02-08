#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;    
  while(n--){
    long long num1, num2, r1,r2;
    long long mi, mx;
    cin>>num1>>num2;
    mi = min(num1,num2);
    mx = max(num1,num2);
    mi--;
    r1 = mi*(mi+1)/2;
    r2 = mx*(mx+1)/2;
    cout<<r2 - r1<<endl;
  } 
  
}
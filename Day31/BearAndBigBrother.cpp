#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int l,b,y=0;
    cin>>l>>b;
    while(1){
        l *= 3;
        b *= 2;
         y++;
         if(l>b&&l!=b)
         break;
    }
    cout<<y;
}
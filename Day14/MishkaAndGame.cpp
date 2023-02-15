#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int m,c,m1=0,c1=0;
    cin>>t;
    while(t--){
    cin>>m>>c;
    if(m==c){
        m1++;
        c1++;
    }
    else if(m>c){
        m1++;
    }
    else if(m<c){
        c1++;
    }
    }
    if(m1==c1){
        cout<<"Friendship is magic!^^";
    }
    else if(m1>c1){
        cout<<"Mishka";
    }
    else if(m1<c1){
        cout<<"Chris";
    }
    return 0;
}

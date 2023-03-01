#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int in=0,out=0,mx=0;
    for(int j=0;j<n;j++){
        int i,o;
        cin>>o>>i;
        in = in - o;
        in = in + i;
        //in = in + i;
        mx=max(mx,in);
    }
    cout<<mx;
}
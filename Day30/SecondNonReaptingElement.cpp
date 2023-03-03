#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
        if(i==j){
            continue;
        }
        if(a[i]==a[j]){
            c=1;
        }
    }
    if(c==0){
        k++;
    }
    if(k==2){
        cout<<a[i];
        break;
    }
    }
}
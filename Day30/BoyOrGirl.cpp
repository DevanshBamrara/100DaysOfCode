#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int k = 0;
    string a;
    cin>>a;
    int n = a.length();
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
        if(i==j){
            break;
        }
        if(a[i]==a[j]){
            c=1;
        }
    }
    if(c==0){
        k++;
    }
    }
    if(k%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}
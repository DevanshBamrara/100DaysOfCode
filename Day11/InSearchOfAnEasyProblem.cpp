#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num==1){
            cout<<"HARD";
            c = 1;
            break;
        }
    }
    if(c==0){
            cout<<"EASY";
        }
}

#include<iostream>

using namespace std;
int main(){
    int n,h,w=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num>h){
            w+=2;
        }
        else{
            w+=1;
        }
    }
    cout<<w;
}

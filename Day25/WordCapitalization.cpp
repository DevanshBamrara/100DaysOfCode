#include<iostream>
 
using namespace std;
int main(){
    string s;
    cin>>s;
    int c = (int)s[0];
    if(c>=97&&c<=122){
        s[0]-=32;
        cout<<s;
    }
    else{
        cout<<s;
    }
}
#include<iostream>
#include <cstring>
using namespace std;
 
int main(){
    string a,b;
    int flag = 0;
    cin>>a;
    cin>>b;
    for(int i = 0; i <a.length(); i++){
       if( tolower(a[i]) < tolower(b[i])){
        cout<<"-1";
        flag = 1;
        break;
       }
       else if(tolower(a[i]) > tolower(b[i])){
        cout<<"1";
        flag = 1;
        break;
       }
    }
    if(flag == 0){
        cout<<"0";
    }
    return 0;
}

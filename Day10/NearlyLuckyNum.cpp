#include<iostream>

using namespace std;
int main(){
        long long n;
        cin>>n;
        int c=0,lst=0;
        while(n!=0){
            lst = n%10;
            if(lst == 7 || lst == 4){
                c++;
            }
            n = n/10;
        }
        if(c == 7 || c == 4){
                cout<<"YES";
            }
        else{
            cout<<"NO";
        }
    }

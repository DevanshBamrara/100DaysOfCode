#include<iostream>
using namespace std;

int main(){
    int a,b,c,max,min,def;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        max = a;
        if(b>=c){
            def = b;
            min = c;
        }
        else{
            def = c;
            min = b;
        }
    }
    else if(b>=c){
        max = b;
        if(a>=c){
            def = a;
            min = c;
        }
        else{
            def = c;
            min = a;
        }
    }
    else{
        max = c;
        if(b>=a){
            def = b;
            min = a;
        }
        else{
            def = a;
            min = b;
        }
    }
    cout<<min<<"\n"<<def<<"\n"<<max<<endl;
    cout<<endl;
    cout<<a<<"\n"<<b<<"\n"<<c<<endl;

}
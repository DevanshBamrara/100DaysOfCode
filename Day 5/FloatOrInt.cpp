#include<iostream>
using namespace std;

int main(){
        float num, des =0;
        cin>>num;
        des = num - (int) num;
        if(des>0){
          cout<<"float "<<(int)num<<" "<<des;
        }
        else if(des == 0){
          cout<<"int "<<(int)num;
        }
}
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int> v = {32,47,32,33,44,75,35};
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<"\nMAX : "<<*max_element(v.begin(),v.end());
    cout<<"\nMIN : "<<*min_element(v.begin(),v.end());
    int a = 221;
    cout<<"\n"<<to_string(a)<<endl;
    string s = "112";
    cout<<stoi(s);
    }
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<vector <int>> v(3,vector<int>(5,10));
   // v.push_back({1,2,3});
    //v.push_back({4,5,6});
    cout<<v[0].size()<<endl;
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[0].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v[i] = num;
    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i];
    // }
    int t;
    cin>>t;
    int s=0,e=v.size()-1;
    while(s<=e){
        int m=(s+e)/2;
        if(v[m]==t){
            cout<<m;
            break;
        }
        else if(v[m]>t){
            e = m-1;
        }
        else if(v[m]<t){
            s = m+1;
        }
    }
    if(s>=e){
        cout<<"NOT FOUND!";
    }
}
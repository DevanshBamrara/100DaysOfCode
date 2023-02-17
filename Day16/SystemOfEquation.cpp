#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=0;
    cin>>n>>m;
    for (int i = 0; i =< n; i++)
    {
        for (int j = 0; j =< m; j++)
        {
           if((i*i)+j==n && (j*j)+i==m){
                c++;
           }
        }
        
    }
    cout<<c;
    
    return 0;
} 
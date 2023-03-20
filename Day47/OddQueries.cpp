#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,t2,sum=0;
        cin>>n>>t2;
        n=n+1;
        vector<int> a(n),temp(n);
        a.push_back(0);
        temp.push_back(0);
        for(int i=1;i<n;i++){
            cin>>a[i];
            sum += a[i];
            temp[i] = sum;
        }
        while(t2--){
            //vector<int> t = a;
            int s,e,k;
            cin>>s>>e>>k;
            sum = temp[n-1]-(temp[e]-temp[s-1])+k*(e-s+1);
            //cout<<sum<<endl;
            if(sum%2!=0){
            cout<<"YES\n";
            }
            else{
            cout<<"NO\n";
            }
        }
    }
}
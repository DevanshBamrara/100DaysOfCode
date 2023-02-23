#include<bits/stdc++.h>
using namespace std;
int main(){
   	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		cin>>x>>y>>n;
		int a = n%x;
		if(a-y>=0){
			cout<<n-(a-y)<<"\n";
		}
		else{
			cout<<n-a-x+y<<"\n";
		}
	}
	return 0;
}
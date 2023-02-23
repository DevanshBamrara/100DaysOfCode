#include<bits/stdc++.h>
using namespace std;
int main(){
   	int n;
	cin>>n;
	int a[n],mx=INT_MIN,c=0;
	for(int  i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>mx){
			mx=a[i];
		}
	}
	for(int  i=0;i<n;i++){
		if(a[i]<mx){
			c+=mx-a[i];
		}
	}
	cout<<c;
	return 0;
}
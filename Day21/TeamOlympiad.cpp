#include<bits/stdc++.h>
using namespace std;
int main(){
   	int n,one=0,two=0,three=0;
	cin>>n;
	vector<int> v(n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]==1){
			a[one]=i;
			one++;
		}
		else if(v[i]==2){
			b[two]=i;
			two++;
		}
		else if(v[i]==3){
			c[three]=i;
			three++;
		}
	}
	int mn = min(one,two);
	mn = min(mn,three);
	if(mn==0){
		cout<<0<<"\n";
	}
	else{
		cout<<mn<<"\n";
		for(int i=0;i<mn;i++){
			cout<<a[i]+1<<" "<<b[i]+1<<" "<<c[i]+1<<"\n";
		}
	}
	return 0;
}
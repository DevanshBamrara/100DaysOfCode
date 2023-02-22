#include<bits/stdc++.h>
using namespace std;
int main(){
   	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		set<double> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			double res = a[j]-a[i];
			res/=2;
			s.insert(res);
		}
		}
	cout<<s.size()<<"\n";
	}
	return 0;
}
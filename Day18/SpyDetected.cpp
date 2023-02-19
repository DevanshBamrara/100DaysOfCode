#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n];
	int s=a[0],p=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<n;i++){
		if(i==0){
			if(a[i]!=a[i+1]&&a[i]!=a[i+2]){
				p=i;
				break;
			}
		}
		else if(i==n-1){
			if(a[i]!=a[i-1]&&a[i]!=a[i-2]){
				p=i;
				break;
			}
		}
		else if(a[i]!=a[i-1]&&a[i]!=a[i+1]){
				p=i;
				break;
		}
	}
	cout<<p+1<<"\n";
	}
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int gcdSum(long long n){
	long long a=n, digSum=0;
	while(a>0){
		digSum+=a%10;
		a/=10;
	}
	int g = __gcd(n,digSum);
	return g;
}
int main(){
   	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(gcdSum(n)!=1){
			cout<<n<<"\n";
		}
		else if(gcdSum(n+1)!=1){
			cout<<n+1<<"\n";
		}
		else if(gcdSum(n+2)!=1){
			cout<<n+2<<"\n";
		}
	}
	return 0;
}
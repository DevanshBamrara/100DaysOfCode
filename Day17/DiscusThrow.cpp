#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,max;
	    cin>>a>>b>>c;
	    if(a>b && a>c){
	        max=a;
	    }
	    else if(b>c){
	        max=b;
	    }
	    else{
	        max=c;
	    }
	    cout<<max<<"\n";
	}
	return 0;
}

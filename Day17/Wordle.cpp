#include<bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin>>c;
    while(c--){
    string s,t;
	cin>>s>>t;
	int len = s.length();
	string m[len];
	for(int i=0;i<len;i++){
	    if(s[i]==t[i])
	    m[i]="G";
	    else
	    m[i]="B";
	}
	for(int i=0;i<len;i++){
	   cout<<m[i];
	}
    cout<<"\n";
    }
	
	return 0;
}

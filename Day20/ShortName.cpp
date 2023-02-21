#include<bits/stdc++.h>
using namespace std;
int main(){
   	string s;
	getline(cin,s);
	int l = s.length(),in=0,c=0,i1=0;
	string n[l],temp;
	for(int i=0;i<l;i++){
		if(i==0){
			n[0]=s[0];
			n[1]='.';
			n[2]=' ';
			in=3;
		}
		if(s[i]==' '){
			c++;
			if(c==1){
				i1=i;
				//cout<<"one"<<endl;
			}
			else if(c==2){
			n[in]=s[i1+1];
			n[in+1]='.';
			n[in+2]=' ';
			in+=3;
			c=0;
			i1=i;
			//cout<<"two"<<endl;
			}
			
		}
	}
	for(int i=i1;i<l;i++){
		i1++;
	n[in++]=s[i1];
	}
	cout<<i1<<endl;
	for(int i=0;i<l;i++){
		cout<<n[i];
	}
	return 0;
} 
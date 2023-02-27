#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.length(),c=0;
    int a[(l/2)+1];
    for(int i=0;i<l;i=i+2){
        a[c]=(int)s[i];
        a[c]-=48;
        c++;
    }
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    for(int i=0;i<c;i++){
        if(i==c-1)
        cout<<a[i];
        else
        cout<<a[i]<<"+";
    }
    return 0;
}
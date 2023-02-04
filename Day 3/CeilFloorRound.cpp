    #include<iostream>
    #include <cmath>
    using namespace std;
     
    int main(){
         double a, b, cel, flr, rnd;
         cin>>a>>b;
         cel = ceil(a/b);
         flr = floor(a/b);
         rnd = round(a/b);
         cout<<"floor "<<a<<" / "<<b<<" = "<<flr<<endl;
         cout<<"ceil "<<a<<" / "<<b<<" = "<<cel<<endl;
         cout<<"round "<<a<<" / "<<b<<" = "<<rnd<<endl;
    }
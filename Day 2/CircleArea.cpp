    #include<iostream>
    #include<iomanip>
    using namespace std;
    int main()
    {
         cout << fixed << setprecision(9);
         double r,pie=3.141592653,ar;
         cin>>r;
         ar = pie*r*r;
         cout<<ar;
    }
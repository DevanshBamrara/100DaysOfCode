    #include<iostream>
    using namespace std;
     
    int main(){
        unsigned long long int a,b,c,d,n = 0,lst=0,mod1 = 0, mod2 = 0;
        cin>>a>>b>>c>>d;
        n = ((a%100)*(b%100)*(c%100)*(d%100))%100;
        if(n < 10){ 
        cout << 0 << n << "\n";
        }
        else{
        cout << n << "\n";    
        } 
    }
// FAST WAY 
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    long long n,m,a,res;
    cin>>n>>m>>a;
    res =  n%a == 0 ? n/a : (n/a)+1;
    res = res * ( m%a == 0 ? m/a : (m/a)+1 );
    cout<<res;
    return 0;
}

// #include<iostream>
// #include<math.h>
// using namespace std;
 
// int main(){
//     long long n,m,a,b1 = 0,b2 = 0;
//     cin>>n>>m>>a;
//     for(int i = 1;;i ++){
//         if((a*i) >= n){
//             b1 = i;
//             break;
//         }
//     }
//     for(int i = 1;;i ++){
//         if((a*i) >= m){
//             b2 = i;
//             break;
//         }
//     }
//     cout<<b1*b2;
//     return 0;
// }
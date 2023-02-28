// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,num=0;
//     cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//         if((int)s[0]==(int)"+"){
//         ++num;
//         }
//         else if((int)s[0]==(int)"-"){
//             --num;
//         }
//         else if((int)s[0]==(int)"X"&&(int)s[1]==(int)"+"){
//             num++;
//         }
//         else if((int)s[0]==(int)"X"&&(int)s[1]==(int)"-"){
//             num--;
//         }
//         }
//         cout<<num;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="++X"){
        ++num;
        }
        else if(s=="--X"){
            --num;
        }
        else if(s=="X++"){
            num++;
        }
        else if(s=="X--"){
            num--;
        }
        }
        cout<<num;
}
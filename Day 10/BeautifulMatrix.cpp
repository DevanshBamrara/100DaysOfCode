#include<iostream>
#include<vector>

using namespace std;
int main(){
    int a[5][5],i1,j1;
     for(int i = 0; i<5 ;i++){
        for(int j = 0; j<5 ;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                i1 = i;
                j1 = j;
            }
    }
    }
    int c = 0;
    if(i1==2 && j1==2){
        c = 0;
    }
    else if(i1==2 || j1==2){
        if(i1 == 2){
           c = j1<2?2-j1:j1-2;
        }
        else if(j1 == 2){
           c = i1<2?2-i1:i1-2;
        }
    }
    else{
            c = i1<2?2-i1:i1-2;
            c += j1<2?2-j1:j1-2;
    }
    cout<<c;
    }
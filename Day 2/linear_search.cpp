#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, num;
    cout<<"Enter the number of element you want to enter"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"number to check : ";
    cin>>num;
    for(int i = 0; i<n; i++){
        if(arr[i]==num){
            cout<<"Number found at index : "<<i;
            return 0;
        }
    }
    cout<<"Number not found";
    return 0;
}
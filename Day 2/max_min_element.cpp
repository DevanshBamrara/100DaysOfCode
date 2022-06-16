#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter the number of element you want to enter"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Min : "<<min<<" Max : "<<max;
    return 0;
}
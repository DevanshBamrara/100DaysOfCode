#include<iostream>
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
    cout<<"Sum : ";
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}
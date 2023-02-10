#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxx(int arr[], int n){
    int max = *max_element(arr,arr+n);
    return max;
}
int minn(int arr[], int n){
    int min = *min_element(arr,arr+n);
    return min;
}

int main(){
    int arr[] = {32,33,77,13,46,73,56,23};
    int n = sizeof arr/sizeof arr[0];
    cout<<maxx(arr,n)<<endl;
    cout<<minn(arr,n)<<endl;

    return 0;
}

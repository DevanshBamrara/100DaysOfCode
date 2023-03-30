#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& v, int target){
    int start = 0, end = v.size()-1, mid = 0;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if(v[mid]==target)
            return mid;
        else if(v[mid]>target)
            end = mid - 1;
        else if(v[mid]<target)
            start = mid + 1;
        
    }
    return -1;
}
int main(){
        vector<int> v = {1,2,3,4,5,6};
        int target = 6;
        cout<<BinarySearch(v,target);
}
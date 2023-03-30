#include <bits/stdc++.h>
using namespace std;

int ReverseBinarySearch(vector<int>& v, int target){
    int start = 0, end = v.size()-1, mid = 0;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if(v[mid]==target)
            return mid;
        else if(v[mid]>target)
            start = mid + 1;
        else if(v[mid]<target)
            end = mid - 1;
        
    }
    return -1;
}
int main(){
        vector<int> v = {6,5,4,3,2,1};
        int target = 6;
        cout<<ReverseBinarySearch(v,target);
}
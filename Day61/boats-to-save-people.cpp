class Solution {
public:
    int numRescueBoats(vector<int>& v, int limit) {
    int l=0,r=v.size()-1,boat=0;
    sort(v.begin(),v.end());
    while(l<=r){
        if(v[l]+v[r]<=limit){
            l++;
            r--;
            boat++;
        }
        else{
            r--;
            boat++;
        }
    }
    return boat;
    }
};
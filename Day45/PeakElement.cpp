class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        nums.insert(nums.begin(), INT_MIN);
        nums.push_back(INT_MIN);
        long long s = 1,e = nums.size()-2,m=0; 
        while(s<e){
            m = (s+e)/2;
            if(nums[m+1]<nums[m]){
                e = m;
            }
            else{
                s = m + 1;
            }
        }
        return s-1;
    }
};
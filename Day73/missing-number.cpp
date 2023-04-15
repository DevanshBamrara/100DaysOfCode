class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, n = nums.size() + 1;
        int Nsum = (n*(n-1))/2;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return Nsum-sum;
    }
};
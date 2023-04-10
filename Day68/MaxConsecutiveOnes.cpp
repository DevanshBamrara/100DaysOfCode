class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0, one = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                mx = max(mx,one);
                one = 0;
            }
            else
                one++;
        }
        mx = max(mx,one);
        return mx;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size();
        if(e==1){
            if(nums[0]==target)
            return 0;
            else
            return -1;
        }
        while(s<=e){
            int m = (s+e)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
        }
        return -1;
    }
};
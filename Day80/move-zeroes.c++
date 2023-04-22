// Optimized 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        if(n != 1)
        while(r<n){
            if(nums[r]){
                int t = nums[l];
                nums[l]= nums[r];
                nums[r]= t;
                l++;
            }
            r++;
        }
    }
};

/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 1;
        if(n != 1)
        while(r<n){
            if(nums[l]==0 && nums[r]!=0){
                int t = nums[l];
                nums[l]= nums[r];
                nums[r]= t;
                l++;
                r++;
            }
            else if(nums[l]==0 && nums[r]==0){
                r++;
            }
            else{
                l++;
                r++;
            }
        }
    }
};
*/

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int el=0,dg=0;
        for(int i=0;i<nums.size();i++){
            el += nums[i];
            int temp = nums[i];
            while(temp!=0){
                int rem = temp%10;
                dg+=rem;
                temp/=10;
            }
        }
        return abs(el-dg);
    }
};
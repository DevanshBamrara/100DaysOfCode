class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> temp = nums;
        int c=0;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[c++]);
        }
        return temp;
    }
};
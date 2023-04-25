class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        map<int, int> M;
        for (int i = 0; i<nums.size(); i++){
            if (M.find(nums[i]) == M.end()) {
                M[nums[i]] = 1;
            }
            else {
                M[nums[i]]++;
            }
        }
        for (auto& it : M) {
            if(it.second>n){
                return it.first ;
            }
        }
        return 0;
    }
};
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            set<int> s0;
            for(int j=0;j<=i;j++){
                s0.insert(nums[j]);
            }
            set<int> s;
            for(int j=i+1;j<nums.size();j++){
                s.insert(nums[j]);
            }
            int temp = s0.size()- s.size();
            v.push_back(temp);
        }
        return v;
    }
};
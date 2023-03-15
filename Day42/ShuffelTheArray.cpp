class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int p1=0,p2=n;
        vector<int> temp;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                temp.push_back(nums[p1++]);
            }
            else{
                temp.push_back(nums[p2++]);
            }
        }
        return temp;
    }
};
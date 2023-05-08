class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start, end, first = -1, last = -1;
        vector<int> ans;
        // First
        start = 0;
        end = nums.size() - 1;
        while(start<=end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        // Last
        start = 0;
        end = nums.size() - 1;
        while(start<=end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
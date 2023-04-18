class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) 
    {
	long long right = 0;
	for (int num : nums) right += num;
	
	long long left = 0;
	for (int i = 0; i < nums.size(); i++)
	{
	    int n = nums[i];
	    right -= n;
	    nums[i] = abs(right - left);
	    left += n;
	}
	return nums;
    }
};
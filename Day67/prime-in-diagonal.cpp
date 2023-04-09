class Solution {
public:
    bool checkPrime(int x){
        if(x == 1)
            return false;
        for(int i=2;i*i<=x;i++)
            if(x % i == 0)
                return false;
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
    int mx = 0, n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i][i]>mx)
        if(checkPrime(nums[i][i])){
            mx = max(mx,nums[i][i]); 
        }
        if(nums[i][n-i-1]>mx)
        if(checkPrime(nums[i][n-i-1])){
            mx = max(mx,nums[i][n-i-1]);
        }
    }
    return mx;
    }
};
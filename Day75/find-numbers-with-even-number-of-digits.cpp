class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(auto n : nums){
            int ans = floor(log10(n)) + 1;
            if(ans%2==0)
                c++;
        }
        return c;
    }
};
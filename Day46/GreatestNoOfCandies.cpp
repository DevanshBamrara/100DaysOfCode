class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());
        int n = candies.size();
        vector<bool> v(n);
        for(int i=0;i<candies.size();i++){
            int t = candies[i]+extraCandies;
            v[i]= (t>=mx);
        }
        return v;
    }
};
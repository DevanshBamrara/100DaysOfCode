//https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> t;
        int n = pref.size();
        t.push_back(pref[0]);
        
        for(int i=1;i<n;i++){
            int temp =  pref[i-1] ^ pref[i];  
            t.push_back(temp);
        }
        return t;
    }
};
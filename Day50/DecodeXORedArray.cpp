//https://leetcode.com/problems/decode-xored-array/description/
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int> en;
        int temp = first;
        en.push_back(temp);
        for(int i = 0; i<n;i++){
            temp = temp ^ encoded[i];
            en.push_back(temp);
        }
    return en;
    }
};
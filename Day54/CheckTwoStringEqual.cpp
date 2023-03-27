class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1, w2;
         for(auto s : word1){
             w1+=s;
         }
         for(auto s : word2){
             w2+=s;
         }
         if(w1==w2)
         return true;
         return false;
    }
};
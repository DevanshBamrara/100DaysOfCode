class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int l1 = word1.size();
        int l2 = word2.size();
        if(l1 == l2){
            for(int i = 0;i<l1;i++){
                str+=word1[i];
                str+=word2[i];
            }
        }
        else if(l1>l2){
            for(int i = 0;i<l2;i++){
                str+=word1[i];
                str+=word2[i];
            }
            for(int i = l2;i<l1;i++){
                str+=word1[i];
            }
        }
        else{
            for(int i = 0;i<l1;i++){
                str+=word1[i];
                str+=word2[i];
            }
            for(int i = l1;i<l2;i++){
                str+=word2[i];
            }
        }
        return str;
    }
};
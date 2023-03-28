class Solution {
public:
    string truncateSentence(string s, int k) {
        string st;
        int c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                c++;
                if(c==k)
                break;
                st+=s[i];
                continue;
            }
            st+=s[i];
        }
        return st;
    } 
};